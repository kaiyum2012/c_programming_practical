/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:27
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 21:08:02
*/

/**
 * algo
 * 1. for each number starting from "1" check if number is even number than add 
 * into sum and increment count. 
 * countine until 20 even number found
 * 2. print sum
 */

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int sum = 0, i=1, count = 0;
	
	// Step 1
	// Loop until first 20 even number found
	while(count < 20){
		// Check if Current number (i) is odd/even
		// if Even -> add into sum, increment count and number
		// else 
		// Odd -> don't add into sum or increment count, Just increment number (i)
		//
		if(i %2==0){
			// i is Even number 
			sum = sum + i;
			count = count + 1;
			i = i + 1;
		}else{
			// i is Odd number
			 i = i + 1;	
		}
		
	}

	// Step 2
	// print output
	printf("sum of first 20 even number is %d \n",sum);

	return 0; // getch();
}