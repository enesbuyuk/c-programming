#include <stdio.h>
#include <math.h>

int main(){
    int number, threeDigitInt, total=0, digit;
    
    printf("Please enter the three digit integer:\n");
    scanf("%d", &threeDigitInt);
    number = threeDigitInt;
    for (number=threeDigitInt;number > 10;number=number/10){
        digit = number % 10;
        total = total + pow(digit,3);

        if(number < 10){
            total = total + pow(number,3);
        }
    }

    if (total == threeDigitInt){
        printf("Equal.");
    }else{
        printf("Not equal.");
    }

    return 0;
}
