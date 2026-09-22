#include <stdio.h>

void rowMaj(int arr[3][4], int elm) {
  int counter = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (elm == *(*(arr + i) + j)) {
        printf("Address wrt Row Major of %d is %p", elm,
               (void *)(*arr + counter));
      }
      counter++;
    }
  }
}

void colMaj(int arr[3][4], int elm) {
  int counter = 0;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      if (elm == *(*(arr + j) + i)) {
        printf("Address wrt Col Major of %d is %p", elm,
               (void *)(*arr + counter));
      }
      counter++;
    }
  }
}

int main() {
  int arr[3][4] = {{3, 2, 7, 5}, {17, 15, 9, 1}, {6, 13, 19, 21}};

  int key, choice;
  printf("Enter key : ");
  scanf("%d", &key);
  printf("Eneter choice\n 1 Calculate Address wrt Row Major\n 2 Calculate "
         "Address wrt Column Major : ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    rowMaj(arr, key);
    break;
  case 2:
    colMaj(arr, key);
    break;
  default:
    printf("Invalid Choice!");
    break;
  }
  return 0;
}