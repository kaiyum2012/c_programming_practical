/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:20:51
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 08:23:43
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int Number;

	printf("Please Enter number for check : odd or even \n");	
	scanf("%d",&Number);

	// If number is divisible by 2 (remainder = 0) => Even number 
	// else
	// odd number
	// hint :: % (modulo) operator for finding remainder 
	if(Number % 2 == 0)
	{
		printf("number %d is Even \n", Number);
	}else{
		printf("number %d is Odd \n", Number);
	}

	return 0;
}