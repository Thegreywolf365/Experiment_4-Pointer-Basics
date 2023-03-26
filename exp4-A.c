//Exp4 A. Using pointers and printing output by referencing them

#include <stdio.h>

int main(){
    int a = 32;
    int *ap = &a;
    printf("The value of Variable is: %d", a);
    printf("\nThe address of variable a is: %d", &a);
    printf("\nThe address of pointer variable ap is: %d", ap);
    printf("\nThe value of variable pointed by pointer ap is: %d", *ap);
    printf("\nThe address of pointer Variable is: %d", &ap);

    return 0;
}