#include <stdio.h>
#include <math.h>

float sphereVolume(float radius);
float sphereArea(float radius);

int main(){
	float radius;
	printf("please enter the radius of circle:\n");
	scanf("%f",&radius);

	
	printf("The area of circle: %f", sphereArea(radius));
	printf("The volume of circle: %f", sphereVolume(radius));
	return 0;
}

float sphereVolume(float radius){
    float sphereVolume;
    sphereVolume = M_PI*radius*radius;
    return sphereVolume;
}

float sphereArea(float radius){
    float sphereArea;
    sphereArea = 4*M_PI*radius*radius;
    return sphereArea;
}
