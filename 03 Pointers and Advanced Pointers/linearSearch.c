#include <stdio.h>

int linearSearch(int arr[], int key, int size) {
  for (int i = 0; i < size; i++) {
    if (key == *(arr + i)) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 3, 2, 4, 6, 9, 5, 12};
  int key;
  printf("Eneter key to be searched : ");
  scanf("%d", &key);
  int size = sizeof(arr) / sizeof(int);
  int result = linearSearch(arr, key, size);
  if (result != -1) {
    printf("Found!");
  } else {
    printf("Enetr a valid key");
  }
}