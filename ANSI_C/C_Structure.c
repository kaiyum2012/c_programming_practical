/**
 * Created By Abdulkaiyum S (#kaiyum2012 - www.kaiyum.in) 
 *
 */

#include <stdio.h>

float Circle_Area(float radius);

#define PI 3.14

int main(int argc, char const *argv[])
{
	float r,area;

	printf("Please enter radius of a circle\n");
	scanf("%f",&r);

	area = Circle_Area(r);

	printf("Area of a circle with radius %5.2f is %5.2f \n", r,area);

	return 0;
}


float Circle_Area(float radius){
	return PI * radius * radius;
}