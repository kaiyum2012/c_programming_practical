#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Number;

	printf("Enter your number for Test - odd/even\n");
	scanf("%d",&Number);

	if(Number%2 == 0){
		// even
		printf("Enter Number %d is Even\n", Number);
	}else{
		// odd
		printf("Enter Number %d is Odd\n", Number);
	}
	return 0;
}