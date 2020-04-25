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

#define HALT_POINT -99
#define INPUT_TEXT "Please enter a number:"
#define SEARCH_TEXT "\nWhat number would you like to search for?"

Node *create_node(int value);
void insert_node(List *list, int value);
List *create_list(int value);
void read_value(char *text, int *number);
void read_values(List *list);
void display_list(List *list);
int search_value(List *list, int value);
void search_values_in_list(List *list);
void free_list(List *list);

#endif