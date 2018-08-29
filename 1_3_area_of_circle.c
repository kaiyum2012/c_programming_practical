/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 20:23:35
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-29 20:36:04
*/

/**
 * Algo
 * 1. Take radius of a circle 
 * 2. calculate area = 3.14 * r * r
 * 3. print output
 * 
 */

#include <stdio.h>

#define PI 3.14

int main(int argc, char const *argv[]) // void main()
{
	
	int radius;
	float area;
   // step 1
   // Take radius of a circle 
	printf("Enter radius of a circle \n");
	scanf("%d",&radius);

	// step 2
	// calculate area = 3.14 * r * r
	area = PI * radius * radius;

	// step 3
	// print output
	printf("circle with radius = %d  has area = %.4f \n",radius,area);

	return 0; // getch();
}