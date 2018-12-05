/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-05 10:26:53
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-05 10:43:42
*/

#include <stdio.h>


//  Global Declaration
int x,y; 


void swap();

int main(int argc, char const *argv[])
{
	printf("Plase enter First Number (X) \n");
	scanf("%d", &x);
	printf("Plase enter second Number (Y) \n");
	scanf("%d", &y);
	
	swap();

	printf("After Swap first number (X) : %d \n", x);
	printf("After Swap second number (Y): %d \n", y);
	
	return 0;
}

// Sub program
void swap()
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}