// Take an arr of 10 elements randomly unsorted. Implement bubble sort and
// perform this for one external loop iteration. Then take that intermediate arr
// and pass it to quick sort.

#include <stdio.h>
int partition(int arr[], int start, int end);
void quickSort(int arr[], int start, int end) {
  if (start < end) {
    int pi = partition(arr, start, end);
    quickSort(arr, start, pi - 1);
    quickSort(arr, pi + 1, end);
  }
}

int partition(int arr[], int start, int end) {
  int pivot = arr[end];
  int i = start - 1;
  for (int j = start; j < end; j++) {
    if (arr[j] <= pivot) {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[i + 1];
  arr[i + 1] = arr[end];
  arr[end] = temp;
  return (i + 1);
}

void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j + 1] < arr[j]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
    break;
  }
  printf("Inside Bubble Sort : ");
  display(arr, size);
  printf("\n");
  quickSort(arr, 0, size - 1);
}

int main() {
  int arr[] = {55, 98, 45, 10, 9, 17, 23, 85};
  int size = sizeof(arr) / sizeof(int);
  bubbleSort(arr, size);
  printf("Sorted Array\n");
  display(arr, size);
  return 0;
}