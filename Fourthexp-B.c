#include <stdio.h>

int main(){
    int x = 5;
    int y = 1049;
    int *ptrx = &x;
    printf("The value of Variable x is: %d", x);
    printf("\nThe address of variable x is: %d", &x);
    printf("\nThe value of Variable y is: %d", y);
    printf("\nThe address of variable x is: %d", &y);
    printf("\nThe value at address pointer points to is: %d", *ptrx);
    return 0;
}