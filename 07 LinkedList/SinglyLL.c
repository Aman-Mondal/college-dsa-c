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

// Insert Element at Begining
void insertStart(int data) {
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  if (head == NULL) {
    head = newNode;
    newNode->next = NULL;
    return;
  }
  newNode->next = head;
  head = newNode;
}

// Insert in Middle
void insertMid(int data, int pos) {
  if (pos < 1) {
    printf("Eneter a valid Position!"); // Assuming positioning starting from 1
    return;
  }
  if (pos == 1) {
    insertStart(data);
    return;
  }
  struct Node *curr = head;
  for (int i = 1; i < pos - 1 && curr != NULL; i++) {
    curr = curr->next;
  }
  if (curr == NULL) {
    printf("Invalid Position");
    return;
  }
  struct Node *newNode = malloc(sizeof(struct Node));
  if (newNode == NULL) {
    printf("Memory allocation failse!");
    return;
  }
  newNode->data = data;
  newNode->next = curr->next;
  curr->next = newNode;
}

// Insert at End
void insertEnd(int data) {
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  if (head == NULL) {
    head = newNode;
    return;
  }
  struct Node *curr = head;
  while (curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = newNode;
}

// Delete at Begining
void deleteStart() {
  if (head == NULL) {
    printf("Empty Linked List!");
    return;
  }
  struct Node *temp = head;
  head = temp->next;
  free(temp);
}

// Delete at Middle
void deleteMid(int pos) {
  if (pos < 1) {
    printf("Invalid Position!");
    return;
  }
  if (pos == 1) {
    deleteStart();
    return;
  }
  struct Node *curr = head;
  for (int i = 1; i < pos - 1 && curr != NULL; i++) {
    curr = curr->next;
  }
  if (curr == NULL || curr->next == NULL) {
    printf("Invalid Position!");
    return;
  }
  struct Node *temp = curr->next;
  curr->next = curr->next->next;
  free(temp);
}

void deleteEnd() {
  if (head == NULL) {
    printf("Empty Linked List!");
    return;
  }
  if (head->next == NULL) {
    free(head);
    head = NULL;
    return;
  }
  struct Node *curr = head;
  while (curr->next->next != NULL) {
    curr = curr->next;
  }
  free(curr->next);
  curr->next = NULL;
}

void display() {
  if (head == NULL) {
    printf("Empty Linked List!");
    return;
  }
  struct Node *curr = head;
  while (curr != NULL) {
    printf("%d ", curr->data);
    curr = curr->next;
  }
}

void search(int key) {
  if (head == NULL) {
    printf("Empty Linked List!");
    return;
  }
  int pos = 1;
  struct Node *curr = head;
  while (curr != NULL) {
    if (curr->data == key) {
      printf("Found at Position : %d", pos);
      return;
    }
    curr = curr->next;
    pos++;
  }
  printf("Element Not Present in SLL");
}

int main() {
  int c, d, p, k;
  while (1) {
    printf(
        "Singly Linked List : \n1. Add Element at Beginning\n2. Add Element "
        "at Middle\n3. Add Element at End\n4. Delete Element at Beginning\n5. "
        "Delete Element at Middle\n6. Delete Element at End\n7. Display "
        "SLL\n8. Search\nEnter Choice : ");
    scanf("%d", &c);
    switch (c) {
    case 1: {
      printf("Enter data: ");
      scanf("%d", &d);
      insertStart(d);
    } break;
    case 2: {
      printf("Enter data: ");
      scanf("%d", &d);
      printf("Enter position: ");
      scanf("%d", &p);
      insertMid(d, p);
    } break;
    case 3: {
      printf("Enter data: ");
      scanf("%d", &d);
      insertEnd(d);
    } break;
    case 4: {
      deleteStart();
    } break;
    case 5: {
      printf("Enter position: ");
      scanf("%d", &p);
      deleteMid(p);
    } break;
    case 6: {
      deleteEnd();
    } break;
    case 7: {
      display();
    } break;
    case 8: {
      printf("Enter Key: ");
      scanf("%d", &k);
      search(k);
    } break;
    default:
      printf("Enter a Valid Choice!");
    }
    printf("\n\n");
  }
}