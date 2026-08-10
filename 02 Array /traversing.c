// Traversing 1D and 2D array

#include <stdio.h>

int main() {
  int arr1d[5] = {1, 2, 3, 4, 5};

  int arr2d[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  int len = sizeof(arr1d) / sizeof(arr1d[0]);

  printf("Printing 1D array \n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr1d[i]);
  }

  printf("\n\n");
  printf("Printing 2D array \n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr2d[i][j]);
    }
    printf("\n");
  }
  return 0;
}