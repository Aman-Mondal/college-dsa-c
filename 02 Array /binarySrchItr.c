#include <stdio.h>

int binarySearch(int arr[], int k, int len) {
  int start = 0;
  int end = len - 1;
  while (start < end) {
    int mid = start + (end - start) / 2;
    // printf("While working");
    if (k == arr[mid]) {
      return 1;
    } else if (arr[mid] > k) {
      end = mid - 1;
    } else if (arr[mid] < k) {
      start = mid + 1;
    }
  }
  return 0;
}

int main() {
  int arr[] = {1, 3, 4, 6, 8, 11, 14, 17, 18, 23};
  int size = sizeof(arr) / sizeof(arr[0]);
  int k;
  printf("Enter key to be searched : ");
  scanf("%d", &k);
  if (binarySearch(arr, k, size)) {
    printf("Found");
  } else {
    printf("Not Found");
  }
}