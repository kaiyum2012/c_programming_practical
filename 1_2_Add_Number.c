#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int num1,num2,sum=0; // declarations


	printf("This program is use to add up 2 numbers \n"); // not neccesary. 

	printf("Enter 1st number \n");
	scanf("%d", &num1);

	printf("Enter 2nd number \n");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("Sum of %d and %d = %d \n",num1,num2,sum);

	return 0;
}