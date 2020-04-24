#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List *create_list(int value)
{
  List *list = malloc(sizeof(List));
  list->first = NULL;
  list->last = NULL;
  list->length = 0;
  return list;
}