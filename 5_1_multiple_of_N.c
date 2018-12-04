/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 08:18:02
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 08:39:58
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N,i;


	printf("Please Enter your number\n");	
	scanf("%d",&N);

	printf("Muliples of given number %d are \n ",N);
	for (i = 1; i <= N; i++)
	{
		if(N % i == 0)
		{
			printf("%d \t",i );
		}
	}
	
	printf("\n");

	return 0;
}