#include<stdio.h>

int linearSrch(int arr[], int key) {
    for(int i=0;i<5;i++) {
        if(arr[i]==key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int k;
    int arr[5] = {12,13,10,23,11};
    printf("Enter Key to be searched : ");
    scanf("%d",&k);
    if(linearSrch(arr, k)) {
        printf("Found");
    } else {
        printf("Not Found");
    }
}