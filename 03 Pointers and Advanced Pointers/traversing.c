#include<stdio.h>

void traversal(int arr[], int len) {
    for(int i=0;i<len;i++) {
        printf("%d ",*(arr+i));
    }
}

int main() {
    int arr[] = {1,4,6,4,11,16,9,7};
    int len = sizeof(arr)/sizeof(int);
    traversal(arr,len);
}