/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:09
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:38:47
*/
/**
 * Algo
 * 1. Take number for test - Odd/Even
 * 2. check number % 2 == 0 => Even else Odd
 * 3. print output
 */
#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int Number; // Declaration 

	// step 1
	// Take number for test - Odd/Even
	printf("Enter your number for Test - odd/even\n");
	scanf("%d",&Number);

	// step 2 & 3
	// Check for Number is odd or even 
	// check number % 2 == 0 => Even else Odd
	// print output
	if(Number%2 == 0){ 
		// even
		printf("Enter Number %d is Even\n", Number);
	}else{
		// odd
		printf("Enter Number %d is Odd\n", Number);
	}
	return 0; // getch()
}