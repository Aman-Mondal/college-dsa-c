// Take an array of 9 elements try searching for an element if it is present
// right in the middle return the index sort the left side in descending order
// using the shorting that will work worst for that array and short the right
// side using that algo which will work best. If it is not found in the middle
// replace that element in the middle and sort using the sorting that will work
// best for this.

#include <stdio.h>

void display(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}

int findMid(int arr[], int size, int key) {
  int mid = size / 2;
  if (arr[mid] == key) {
    return mid;
  } else {
    arr[mid] = key;
  }
  return -1;
}

void bubbleSort(int arr[], int size) {
  for (int step = 0; step < size; step++) {
    for (int i = 0; i < size - step - 1; i++) {
      if (arr[i] < arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}

void merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;
  int L[n1], M[n2];
  for (int i = 0; i < n1; i++) {
    L[i] = arr[l + i];
  }
  for (int j = 0; j < n2; j++) {
    M[j] = arr[m + 1 + j];
  }
  int i = 0;
  int j = 0;
  int k = l;
  while (i < n1 && j < n2) {
    if (L[i] >= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

void insertionSort(int arr[], int size) {
  for (int step = 1; step < size; step++) {
    int key = arr[step];
    int j = step - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(int);
  int key = 9;
  int mid = findMid(arr, size, key);
  if (mid) {
    bubbleSort(arr, mid);
    mergeSort(arr, mid + 1, size);
  } else {
    insertionSort(arr, size);
  }
  display(arr, size);
  return 0;
}