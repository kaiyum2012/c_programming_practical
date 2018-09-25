/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-29 21:08:11
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-09-24 11:52:18
*/

/**
 *
 * AIM : Find roots of quadratic equation.
 * algo
 * 1. take input a, b, c (integer)
 * 2. calculate D = b^2 - 4ac
 * 3. Check if D >= 0 --> Find Roots using -b + √D / 2a , -b - √D / 2a
 * else roots are imagenary 
 * 
 */
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) // void main()
{
	int a,b,c,D;
	float root1,root2;
	// a=2;b=4;c=2;

	// step 1
	// take input a, b, c (integer)
	printf("Enter a \n");
	scanf("%d", &a);

	printf("Enter b \n");
	scanf("%d", &b);

	printf("Enter c \n");
	scanf("%d", &c);

	// step 2
	// calculate D = b^2 - 4ac
    D = (b * b) - (4 * a * c);
   
    // step 3
    // Check if D >= 0 --> Find Roots using -b + √D / 2a , -b - √D / 2a
    //  else roots are imagenary 
	if(D >= 0) {
		root1 = ((-1)* b - sqrt(D)) / (2 * a); 	
		root2 = ((-1)* b + sqrt(D)) / (2 * a); 	

		printf("Quadratic roots are %.2f and %.2f \n",root1,root2);
	}else{
		printf("Root is imagenary, so we can't find it \n");
	}

	return 0; // getch();
}