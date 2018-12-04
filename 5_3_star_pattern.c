/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 08:45:51
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 08:47:49
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

	int i, j; 

	for (i = 5; i >=1; i--) // ROW(s)
	{
		for (j = 1; j <= i; j++) // Col(s)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}