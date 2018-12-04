/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 08:59:54
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 09:07:17
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int Num,i=2;

	printf("Please Enter number (Non-zero Integer)\n");
	scanf("%d",&Num);

	printf("factors of the given number %d is/are\n",Num);
	while(Num > 1)
	{	
		if(Num % i == 0)
		{
			Num = Num / i;
			printf("%d \t", i);

		}else{
			i++;
		}
	}
	return 0;
}