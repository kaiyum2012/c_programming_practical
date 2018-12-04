/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 08:50:00
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 08:53:02
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N=1,i,sum = 0;

	while(N <=10)
	{
		sum += N * N;  
		N++;
	}

	printf("sum of given series is %d\n", sum);
	return 0;
}