#include <stdio.h>
#include <stdlib.h>
#include "list.h"

Node *create_node(int value)
{
  Node *new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}

void insert_node(List *list, int value)
{
  Node *new_node = create_node(value);
  if (list->first == NULL)
  {
    list->first = new_node;
  }
  else
  {
    list->last->next = new_node;
  }
  list->last = new_node;
  list->length++;
}

List *create_list(int value)
{
  List *list = malloc(sizeof(List));
  list->first = NULL;
  list->last = NULL;
  list->length = 0;
  return list;
}