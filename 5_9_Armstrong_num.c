/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 09:29:44
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 09:42:26
*/

// abc = a ^ n + b ^ n  + c ^ n 
// where n = no of digits 

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int Num,totalDigits = 0,base = 10,sumOfDigits,digit;

	printf("Please Enter number (Non-zero Integer)\n");
	scanf("%d",&Num);

	while(Num > 0){
		Num = Num / base;
		totalDigits ++;
	}

	while(Num > 0)
	{
		digit = Num % base;
		sumOfDigits = sumOfDigits + pow(digit,totalDigits);

		Num = Num / base;
	}

	if(sumOfDigits == Num)
	{
		printf("Given number is an Armastrong Number\n");
	}
	else
	{
		printf("Given number is not an Armastrong Number\n");		
	}

	return 0;
}