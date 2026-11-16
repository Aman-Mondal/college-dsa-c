#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

void preorder(struct Node *root) {
  if (root == NULL) {
    return;
  }
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorder(struct Node *root) {
  if (root == NULL) {
    return;
  }
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void postorder(struct Node *root) {
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

int main() {
  struct Node *root = malloc(sizeof(struct Node));
  struct Node *node1 = malloc(sizeof(struct Node));
  struct Node *node2 = malloc(sizeof(struct Node));

  root->data = 10;
  node1->data = 20;
  node2->data = 30;
  root->left = node1;
  root->right = node2;
  node1->left = NULL;
  node2->right = NULL;
  node2->left = NULL;
  node1->right = NULL;
  printf("Preorder traversal : ");
  preorder(root);
  printf("\n");
  printf("Inorder traversal : ");
  inorder(root);
  printf("\n");
  printf("Postorder traversal : ");
  postorder(root);
  printf("\n");
}