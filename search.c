#include <stdio.h>
#include "list.h"

#define HALT_POINT -99
#define INPUT_TEXT "Please enter a number:"
#define SEARCH_TEXT "\nWhat number would you like to search for?"

void read_value(char *text, int *number);
void read_values(List *list);
void search_values_in_list(List *list);

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

void search_values_in_list(List *list)
{
  int value = 0;
  read_value(SEARCH_TEXT, &value);

  while (value != HALT_POINT)
  {
    int position = search_position(list, value);
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

int main(void)
{
  List *list = create_list();
  read_values(list);
  search_values_in_list(list);
  free_list(list);
  return 0;
}