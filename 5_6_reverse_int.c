/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-11-01 12:33:15
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 08:58:22
*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int num,revNum = 0;
	
	printf("Please Enter your Number (Positive Integer)\n");
	scanf("%d",&num);

	if(num >=0){
		do
		{
			revNum = revNum * 10 + (num %10);
			num/=10;

		}while(num > 0);

		printf("Reverse Num is %d\n", revNum);
		}
	else{
		printf("invalid input\n");
	}
	return 0;
}