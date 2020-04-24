#include "list.h"

int main(void)
{
  List *list = create_list(5);
  take_inputs(list);
  search_value_in_list(list);
  return 0;
}