// Find factorial using Recursion and Iteration

#include <stdio.h>

int factRec(int n);
int factItr(int n);

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  printf("%d \n", factItr(n));
  printf("%d", factRec(n));
  return 0;
}

int factItr(int n) {
  int fact = 1;
  for (int i = n; i > 0; i--) {
    fact *= i;
  }
  return fact;
}

int factRec(int n) {
    if(n==0||n==1){
        return 1;
    }
    return n*factRec(n-1);
}