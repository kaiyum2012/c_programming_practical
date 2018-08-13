#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int length,width,area;

	printf("Enter length of a rectangle \n");
	scanf("%d",&length);

	printf("Enter width of a rectangle \n");
	scanf("%d", &width);

	area = length * width;

	printf("Area of rectangle with length = %d and width = %d is %d \n",length,width,area);
	return 0;
}