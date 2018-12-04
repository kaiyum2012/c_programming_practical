/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 09:08:40
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 09:28:52
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Num,digit,base = 10,sum = 0;

	printf("Please Enter number (Non-zero Integer)\n");
	scanf("%d",&Num);

	while(Num > 0)
	{
		digit = Num % base; 
		sum += digit;
		Num = Num / 10;
	}
	printf("sum is %d\n", sum);

	return 0;
}