/*
        for this example output:
            5 5 5 5 5 5 5 5 5
            5 4 4 4 4 4 4 4 5
            5 4 3 3 3 3 3 4 5
            5 4 3 2 2 2 3 4 5
            5 4 3 2 1 2 3 4 5
            5 4 3 2 2 2 3 4 5
            5 4 3 3 3 3 3 4 5
            5 4 4 4 4 4 4 4 5
            5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;
    printf("Please enter the value of n (only integer):");
  
    if (scanf("%d",&n)==0){
        printf("You must enter a integer!");
    }

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", n - min(min(i, j), min(size - 1 - i, size - 1 - j)));
        }
        printf("\n");
    }

    return 0;
}
