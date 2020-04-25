#include "list.h"

int main(void)
{
  List *list = create_list(5);
  read_values(list);
  search_values_in_list(list);
  free_list(list);
  return 0;
}