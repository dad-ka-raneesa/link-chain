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

List *create_list(void)
{
  List *list = malloc(sizeof(List));
  list->first = NULL;
  list->last = NULL;
  list->length = 0;
  return list;
}

int search_position(List *list, int value)
{
  Node *p_walk = list->first;
  int position = 0;
  while (p_walk != NULL)
  {
    if (p_walk->value == value)
    {
      return position;
    }
    p_walk = p_walk->next;
    position++;
  }
  return -1;
}

void display_list(List *list)
{
  Node *p_walk = list->first;
  while (p_walk != NULL)
  {
    printf("%d ", p_walk->value);
    p_walk = p_walk->next;
  }
}

void free_list(List *list)
{
  Node *p_walk = list->first;
  Node *node_to_free = NULL;
  while (p_walk != NULL)
  {
    node_to_free = p_walk;
    p_walk = p_walk->next;
    free(node_to_free);
  }
  free(list);
}