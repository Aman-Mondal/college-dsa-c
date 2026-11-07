#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

struct Node *head = NULL;

// Initializing three node
void initialize() {
  struct Node *first = malloc(sizeof(struct Node));
  struct Node *second = malloc(sizeof(struct Node));
  struct Node *third = malloc(sizeof(struct Node));
  head = first;
  first->data = 10;
  second->data = 20;
  third->data = 30;
  first->next = second;
  second->next = third;
  third->next = NULL;
}

int main() {
  initialize();
  printf("%d", head->next->data);
}