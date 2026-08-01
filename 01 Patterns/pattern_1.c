/*
Question:
Write a C program to print the following pattern for a given number of rows.

Example (n = 5):
*
* *
* * *
* * * *
* * * * *
*/

#include<stdio.h>

int main() {
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=0; i<n;i++) {
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}