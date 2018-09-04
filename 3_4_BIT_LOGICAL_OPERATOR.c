/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-30 11:38:31
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-09-04 09:01:27
*/


#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	unsigned short int a,b;
	short int d;
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
	
	c = a << 2;
	printf(" %d is left shift by 2 is %d \n", a, c ); 

	c = a >> 2;
	printf(" %d is right shift by 2 is %d \n", a, c ); 
	
	// d= -4;
	// c = d << 1;
	// printf(" %d is left shift by 1 is %d \n", d, c ); 
	
	return 0; //getch();
}

