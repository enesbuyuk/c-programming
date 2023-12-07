#include <stdio.h>
#include <math.h>

int main(){
    int inputNumber, total=0, digit, compareNumber, numberOfDigits;
    printf("Please enter the integer number: ");
    if (scanf("%d", &inputNumber) == 0){
        printf("You must enter the integer number!");
        return 0;
    }
    numberOfDigits = log10(inputNumber) + 1 ;
    for(compareNumber = inputNumber; compareNumber>10; compareNumber=compareNumber/10){
        digit = compareNumber % 10;
        total = total + pow(digit,numberOfDigits);
    }
    if(compareNumber < 10){
        total = total + pow(compareNumber,numberOfDigits);
    }
    if(total == inputNumber){
        printf("The number is a narcissistic number.");
    }else{
        printf("The number isn't a narcissistic number.");
    }
    return 0;
}
