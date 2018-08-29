#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1,num2,num3;

	printf("Enter 1st number \n");
	scanf("%d", &num1);

	printf("Enter 2nd number \n");
	scanf("%d", &num2);

	printf("Enter 3rd number \n");
	scanf("%d", &num3);

	if(num1 > num2){
		// num1 is bigger
		if(num1 > num3){
			// num1 is bigger
			printf("%d is Max number \n", num1);	
		}else{
			// num3 is bigger
			printf("%d is Max number \n", num3);	
		}
	}else if(num2 > num3){
		printf("%d is Max number \n", num2);
	}else{
		//num3 is bigger
		printf("%d is Max number \n", num3);
	}
	return 0;
}