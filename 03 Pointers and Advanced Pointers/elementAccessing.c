#include<stdio.h>

int main() {
    int arr[] = {1,4,3,7,9,5};
    int idx;
    printf("Enter index of element to be accessed : ");
    scanf("%d",&idx);
    printf("Element at index %d is %d",idx,*(arr+idx));
}