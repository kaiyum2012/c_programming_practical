/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-10-23 08:48:11
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-10-23 09:08:19
*/




//  Struture OF FOR loop
// for(init ; condition ; increment / decrement / stepping )
// {
	
// }




#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,i;

	printf("Enter Your number\n");
	scanf("%d",&num);

	for (i = 1; i<= 10; i++)
	{
		printf("i = %d\n", i );
		// printf("%d * %d  = %d \n", num , i, num * i );
	}

	return 0;
}