/*
* @Author: abdulkaiyum
* @Date:   2018-09-07 12:19:26
* @Last Modified by:   abdulkaiyum
* @Last Modified time: 2018-09-07 12:26:45
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int bit,number = 5,base = 1;
	long int binary = 0;

	while (number > 0)
	{
	   bit = number % 2;
	   number = number / 2;
	   binary += (base * bit);

	   base	*= 10;

	}

	printf("Binary of decimal number %d is %ld\n", number,binary);

	return 0;
}