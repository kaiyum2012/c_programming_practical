/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 19:46:05
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:36:10
*/

/**
 * Algo
 * 1. Take length and width of a rectangle 
 * 2. calculate area = l * b
 * 3. print output
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	
	int length,width,area;
	
	// step 1
	// Take length and width of a rectangle
	printf("Enter length of a rectangle \n");
	scanf("%d",&length);

	printf("Enter width of a rectangle \n");
	scanf("%d", &width);

	// step 2
	// calculate area = l * b
	area = length * width;

	// step 3
	// print output
	printf("Area of rectangle with length = %d and width = %d is %d \n",length,width,area);
	return 0; // getch();
}