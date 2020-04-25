#include <stdio.h>
#include "list.h"

void read_value(char *text, int *value)
{
  printf("%s\n", text);
  scanf("%d", value);
}

void read_values(List *list)
{
  int value = 0;
  read_value(INPUT_TEXT, &value);

  while (value != HALT_POINT)
  {
    insert_node(list, value);
    read_value(INPUT_TEXT, &value);
  }
}

int search_value(List *list, int value)
{
  Node *p_walk = list->first;
  int position = -1;
  for (int i = 0; i < list->length; i++)
  {
    if (p_walk->value == value)
    {
      position = i;
      break;
    }
    p_walk = p_walk->next;
  }
  return position;
}

void search_values_in_list(List *list)
{
  int value = 0;
  read_value(SEARCH_TEXT, &value);

  while (value != HALT_POINT)
  {
    int position = search_value(list, value);
    if (position > -1)
    {
      printf("%d is present in the list at position %d\n", value, position);
    }
    else
    {
      printf("%d is not present in the list\n", value);
    }
    read_value(SEARCH_TEXT, &value);
  }
}