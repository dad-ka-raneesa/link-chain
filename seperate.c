#include <stdio.h>
#include "list.h"

void take_input(int *input)
{
  printf("%s\n", INPUT_TEXT);
  scanf("%d", input);
}

void take_inputs(List *list)
{
  int input = 0;
  take_input(&input);

  while (input != 99)
  {
    take_input(&input);
  }
}