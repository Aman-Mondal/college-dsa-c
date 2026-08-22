#include <stdio.h>

int binarySearch(int arr[], int k, int start, int end) {
  int mid = start + (end - start) / 2;
  if (k == arr[mid]) {
    return 1;
  } else if (k > arr[mid]) {
    return binarySearch(arr, k, mid + 1, end);
  } else if (k < arr[mid]) {
    return binarySearch(arr, k, start, mid - 1);
  }
  return 0;
}

int main() {
  int arr[] = {1, 3, 5, 7, 12, 14, 17, 22};
  int len = sizeof(arr) / sizeof(int);
  int k;
  printf("Enetr key to be searched : ");
  scanf("%d", &k);
  if (binarySearch(arr, k, 0, len - 1)) {
    printf("Found");
  } else {
    printf("Eneter a valid Key!");
  }
}