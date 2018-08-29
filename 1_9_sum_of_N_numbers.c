/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:16
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:52:05
*/
/**
 * algo
 * 1. Input Last number of a series 
 * 2. for each number from series add into the sum until reach to the last number.
 * e.g 1 + 2 + 3 + ... + 10, Here 10 is last Number
 * 3. print sum
 */

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{ 
	
	int LastNumber,sum=0;
	int counter = 1;
	
	//step 1 
	//Input Last number of a series 
    printf("Enter N (Last Number) of a series \n");
    scanf("%d",&LastNumber);

    // step 2 & 3
    //  start from 1 To Last Number and sum 
    while( counter <= LastNumber ){

    	sum = sum + counter;	

    	counter = counter + 1;
    }

    printf("Sum = %d\n", sum );

	return 0; //getch();
}