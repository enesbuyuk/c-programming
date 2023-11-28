#include <stdio.h>

int main() {
    double myInput, result=1;
    printf("Please enter the value of n for calculating the number e: ");
    scanf("%lf",&myInput);
    for (int i =0; i<myInput;i++){
        result *= 1+1/myInput;
    }
    printf("%lf",result);
    return 0;
}
