#include<stdio.h>
#include<string.h>

int main() {
    char str[10];
    printf("Enter a data structure (Array ,LinkedList ,Graph ,Tree) : ");
    scanf("%s", &str);
    if(strcmp(str,"Array")==0) {
        printf("Non-Primitive, Linear, Static");
    } else if(strcmp(str,"LinkedList")==0) {
        printf("Non-Primitive, Linear, Dynamic");
    } else if(strcmp(str,"Graph")==0) {
        printf("Non-Primitive, Non-Linear");
    } else if(strcmp(str,"Tree")==0) {
        printf("Non-Primitive, Non-Linear");
    } else {
        printf("Enter a valid DS");
    }
    return 0;
}