/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-30 11:38:31
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-30 12:14:41
*/


#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	unsigned short int a,b;
	int c ;

	printf("input a \n");
	scanf("%hu",&a);

	printf("input b \n");
	scanf("%hu",&b);

	// Bitwise AND operator - &
	c = a & b;
	printf("a AND b  = %d \n", c);

	// Bitwise OR operator - |
	c = a | b;
	printf("a OR b = %d \n", c); 
		

	// Bitwise Not operator
	// c = ~ a;
	// printf("NOT of operand a = %d \n", c);

	return 0; //getch();
}

