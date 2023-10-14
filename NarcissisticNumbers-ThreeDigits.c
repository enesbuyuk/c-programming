#include <stdio.h>
#include <math.h>

int main(){
    int number, threeDigitsInt, total=0, digit;
    
    printf("Please enter the three digit integer:\n");
    scanf("%d", &threeDigitsInt);
    number = threeDigitsInt;
    for (number=threeDigitsInt;number > 10;number=number/10){
        digit = number % 10;
        total = total + pow(digit,3);


    }

    if(number < 10){
        total = total + pow(number,3);
    }
    
    if (total == threeDigitsInt){
        printf("Equal.");
    }else{
        printf("Not equal.");
    }

    return 0;
}


