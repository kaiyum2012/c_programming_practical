#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int number;
	
	// step 1 
	// Input number 
	printf("Enter Your Number \n");
	scanf("%d",&number);

	// printf("You have entered %d \n",number);
	
	// step 2
	// check Number :
	// if (number % 2 == 0)	 
	// => number is even 
	// else 
	// => number is odd 

	if(number%2 == 0)
	{
		printf("Number is even \n");
	}
	else
	{
		printf("Number is odd \n");
	}

	return 0; // getch();
}
