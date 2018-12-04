/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 09:43:04
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 10:50:20
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int Num,i = 2, isPrime = 1;

	printf("Please Enter number (Non-zero Integer)\n");
	scanf("%d",&Num);

	while(i < Num)
	{	
		if(Num % i == 0)
		{
			isPrime = 0;
			break;
		}

		i++;
	}

	if(isPrime == 1){
		printf("Given Number %d is a prime number\n",Num);
	}else{
		printf("Given Number %d is not a prime number\n",Num);
	}

	return 0;
}