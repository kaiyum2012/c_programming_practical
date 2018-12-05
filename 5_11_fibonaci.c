/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 10:51:13
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-05 12:50:28
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int f0=0,f1=1,f2,temp,i=1, Num;


	printf("How many terms you want for fibonaci series (non zero integer) \n");
	scanf("%d",&Num); 

	printf("Fibonaci Series is %d \t %d \t", f0,f1);
	// first 10 terms of fibonaci seriese
	while (i <=Num){

		f2 = f0 + f1;
		f0 = f1;
		// temp = f1;
		f1 = f2;

		printf("%d \t", f2 );

		i++;
	}

	printf("\n");
	return 0;
}