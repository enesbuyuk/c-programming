#include <stdio.h>
int main() {
    int X, *P;
    printf("Please enter the value of the X variable:");
    scanf("%d",&X);
    P = &X;

    printf("\nMemory address of X: %d\n", &X);
    printf("Value of X: %d\n", X);
    printf("Memory address of P: %d\n", &P);
    printf("Pointed value by P: %d\n", *P);
    printf("Referenced value by P: %d\n", P);

    X = 200;
    printf("\nThe memory address where X is modified: %d\n", &X);

    return 0;
}
