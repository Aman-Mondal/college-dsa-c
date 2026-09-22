#include <stdio.h>

void display(int arr[], int size);
void bubbleSort(int arr[], int size);

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    printf("Step %d :", i + 1);
    for (int i = 0; i < size; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
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
  bubbleSort(arr, size);
  printf("Sorted Array\n");
  display(arr, size);
  return 0;
}