#include <stdio.h>
int main(int argc, char const *argv[])
{
	
	int num1,num2,sum;

	printf("Enter 1st number \n");
	scanf("%d", &num1);

	printf("Enter 2nd number \n");
	scanf("%d", &num2);

	sum = num1 + num2;

	printf("Sum of %d and %d = %d \n",num1,num2,sum);

	return 0;
}