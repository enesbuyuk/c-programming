#include <stdio.h>

int main() {
    double myInput, result=1;
    scanf("%lf",&myInput);
    for (int i =0; i<myInput;i++){
        result *= 1+1/myInput;
    }
    printf("%lf",result);
    return 0;
}
