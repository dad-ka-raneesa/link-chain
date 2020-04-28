#ifndef __LIST_H_
#define __LIST_H_

typedef struct node
{
  int value;
  struct node *next;
} Node;

typedef struct
{
  Node *first;
  Node *last;
  int length;
} List;

Node *create_node(int value);
void insert_node(List *list, int value);
List *create_list(void);
int search_position(List *list, int value);
void display_list(List *list);
void free_list(List *list);

#endif