#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int height,base;

	float area;

	printf("Enter height of a triangle \n");
	scanf("%d",&height);

	printf("Enter base of a triangle \n");
	scanf("%d", &base);

	area =  0.5 * height * base;

	printf("Area of triangle with height = %d and base = %d is %f \n",height,base,area);
	return 0;
}