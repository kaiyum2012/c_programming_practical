/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:07
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:33:51
*/

/**
 * Algo
 * 1. Take Height and base of a triangle 
 * 2. calculate area = 1/2 * h * b
 * 3. print out put
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	
	// Variable declaration 
	int height,base;
	float area;

	// Step 1
	// Take Height of a triangle 
	printf("Enter height of a triangle \n");
	scanf("%d",&height);

	// Take Base of a triangle
	printf("Enter base of a triangle \n");
	scanf("%d", &base);

	// step 2
	//calculate Area
	area =  0.5 * height * base;

	// step 3
	// Give result on to output screen
	printf("Area of triangle with height = %d and base = %d is %f \n",height,base,area);
	return 0; // getch();
}