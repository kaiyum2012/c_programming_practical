/*
* @Author: abdulkaiyum
* @Date:   2018-11-01 12:07:26
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-11-01 12:30:47
*/

#include <stdio.h>

int getBaseValue(int n);

int main(int argc, char const *argv[])
{
	
	int num = 456,revNum = 0;
	int base = 1;

	base = getBaseValue(num);

	// printf("base = %d\n", base );
	while(num>0){

		revNum += (num % 10) * base;
		// printf("revNum = %d \n",revNum);
		num = num /10;
		base/=10;
	}

	printf("Reverse Num is %d\n", revNum);

	return 0;
}

int getBaseValue(int n){
	int base = 1;
	while (n > 0){
		n/=10;
		base *= 10;
	}

	return base / 10;
}