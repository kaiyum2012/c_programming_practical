/*
* @Author: abdulkaiyum
* @Date:   2018-09-07 12:19:26
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-10-23 10:53:38
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int bit,number,base = 1;
	long int binary = 0;

	printf("Enter your number\n");
	scanf("%d", &number);

	printf("Binary for number %d is",number);
	while (number > 0)
	{
	   bit = number % 2;
	   number = number / 2;
	   binary += (base * bit);

	   base	*= 10;

	}

	printf(" %ld\n",binary);

	return 0;
}