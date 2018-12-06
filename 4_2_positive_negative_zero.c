/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:25:07
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 08:27:04
*/


#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int Number;

	printf("Please Enter number for check : odd or even \n");	
	scanf("%d",&Number);

	if(Number > 0)
	{
		printf("number %d is positive \n", Number);
	}else if(Number < 0){
		printf("number %d is Negative \n", Number);
	}
	else
	{
		printf("Number is Zero\n");
	}

	return 0;
}
