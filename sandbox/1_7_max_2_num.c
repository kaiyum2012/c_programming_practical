#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1,num2;

	printf("Enter 1st number \n");
	scanf("%d", &num1);

	printf("Enter 2nd number \n");
	scanf("%d", &num2);

	if(num1 > num2){
		printf("%d is Max number \n", num1);
	}else{
		printf("%d is Max number \n", num2);
	}

	return 0;
}