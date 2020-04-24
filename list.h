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

#define INPUT_TEXT "Please enter a number:"

List *create_list(int value);
void take_input(int *number);
void take_inputs(List *list);

#endif