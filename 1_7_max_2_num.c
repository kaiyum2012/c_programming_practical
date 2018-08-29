/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:11
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:41:28
*/

/**
 * Algo
 * 1. Take 2 numbers for comparision
 * 2. if( number1 > number2 ) => "Number 1 is Max" else "Number 2 is max"
 * 3. print output
 */
#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int num1,num2;

	//step 1
	// Take 2 numbers for comparision
	printf("Enter 1st number \n");
	scanf("%d", &num1);

	printf("Enter 2nd number \n");
	scanf("%d", &num2);

	// step 2 & 3
	// if( number1 > number2 ) => "Number 1 is Max" else "Number 2 is max"
	// print output
	if(num1 > num2){
		printf("%d is Max number \n", num1);
	}else{
		printf("%d is Max number \n", num2);
	}

	return 0; // getch();
}