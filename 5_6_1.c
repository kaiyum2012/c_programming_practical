/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-11-01 12:33:15
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-11-01 12:35:38
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int num = 456,revNum = 0;
	
	do
	{
		revNum = revNum * 10 + (num %10);
		num/=10;

	}while(num > 0);

	printf("Reverse Num is %d\n", revNum);

	return 0;
}