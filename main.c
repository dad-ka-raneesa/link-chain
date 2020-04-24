#include "list.h"

int main(void)
{
  List *list = create_list(5);
  take_inputs(list);
  display_list(list);
  return 0;
}