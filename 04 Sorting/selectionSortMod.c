#include <stdio.h>

void selectionSortMod(int arr[], int size);
void display(int arr[], int size);

void selectionSortMod(int arr[], int size) {
  int min = 0;
  int max = size - 1;
  for (int step = 0; step < size - 2; step++) {
    if (min >= max) {
      break;
    }
    int min_idx = min;
    int max_idx = min;
    for (int i = min + 1; i <= max; i++) {
      if (arr[i] < arr[min_idx]) {
        min_idx = i;
      }
      if (arr[i] > arr[max_idx]) {
        max_idx = i;
      }
    }
    int temp1 = arr[min_idx];
    arr[min_idx] = arr[min];
    arr[min] = temp1;
    if (max_idx == min) {
      max_idx = min_idx;
    }
    int temp2 = arr[max_idx];
    arr[max_idx] = arr[max];
    arr[max] = temp2;
    printf("Step %d :", step + 1);
    for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
    min++;
    max--;
  }
}

void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int arr[] = {55, 98, 45, 10, 9, 17, 23, 85};
  int size = sizeof(arr) / sizeof(int);
  selectionSortMod(arr, size);
  printf("\nSorted Array\n");
  display(arr, size);
  return 0;
}