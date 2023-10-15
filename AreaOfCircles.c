#include <stdio.h>
#include <math.h>

int main(){
    double circleRadius;
    printf("Please enter the radius value of circle: \n");

    if(scanf("%lf",&circleRadius) == 0){
        printf("Please enter the valid radius value!\n");
        return 0;
    }

    double circleArea;
    circleArea = M_PI*circleRadius;
    printf("The Circle Area: %lf",circleArea);

    return 0; 
}
