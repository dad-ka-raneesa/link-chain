#include <stdio.h>
#include "list.h"

void take_input(char *text, int *input)
{
  printf("%s\n", text);
  scanf("%d", input);
}

void take_inputs(List *list)
{
  int input = 0;
  take_input(INPUT_TEXT, &input);

  while (input != 99)
  {
    insert_node(list, input);
    take_input(INPUT_TEXT, &input);
  }
}

int search_value(List *list, int value)
{
  Node *p_walk = list->first;
  int index = -1;
  for (int i = 0; i < list->length; i++)
  {
    if (p_walk->value == value)
    {
      index = i;
    }
    p_walk = p_walk->next;
  }
  return index;
}

void search_value_in_list(List *list)
{
  int value = 0;
  take_input(SEARCH_TEXT, &value);

  while (value != -99)
  {
    int index = search_value(list, value);
    if (index > -1)
    {
      printf("%d is present in the list at position %d\n", value, index);
    }
    else
    {
      printf("%d is not present in the list\n", value);
    }
    take_input(SEARCH_TEXT, &value);
  }
}