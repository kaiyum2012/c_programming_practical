/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 20:52:56
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 21:07:01
*/

/**
 * algo
 * 1. for each number starting from "1" check if number is odd number than add 
 * into sum and increment count. 
 * countine until 10 odd number found
 * 2. print sum
 */

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int count = 0, i=1,sum =0;

	// Step 1
	// Loop until first 10 odd number found
	while(count < 10){
		// Check if Current number (i) is odd/even
		// if Odd -> add into sum, increment count and number (i)
		// else 
		// even -> don't add into sum or increment count, Just increment number (i)
		//
		if(i %2 != 0){
			// i is Odd number 
			sum = sum + i;
			count = count + 1;
			i = i + 1;
		}else{
			// i is Even number
		 i = i + 1;	
		}
	}

	// Step 2
	// print output
	printf("sum of first 10 odd numbers = %d \n",sum);
	
	return 0; // getch();
}