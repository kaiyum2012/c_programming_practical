/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:13
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:45:23
*/

/**
 * Algo
 * 1. take 3 (different) numbers for comparision
 * 2. compare first 2 number and find Max than compare it with 3rd number.
 * 3. print outout
 */
#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int num1,num2,num3;

	// 1. step 1
	// take 3 (different) numbers for comparision
	printf("Enter 1st number \n");
	scanf("%d", &num1);

	printf("Enter 2nd number \n");
	scanf("%d", &num2);

	printf("Enter 3rd number \n");
	scanf("%d", &num3);

	// step 2 & 3
	// compare first 2 number and find Max than compare it with 3rd number.
	// print output
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

	return 0; // getch();
}