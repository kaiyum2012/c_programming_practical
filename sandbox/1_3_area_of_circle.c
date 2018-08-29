#include <stdio.h>

 #define PI 3.14

int main(int argc, char const *argv[])
{
	
	int radius;
	float area;
   
	printf("Enter radius of a circle \n");
	scanf("%d",&radius);

	area = PI * radius * radius;

	printf("circle with radius = %d  has area = %.4f \n",radius,area);

	return 0;
}