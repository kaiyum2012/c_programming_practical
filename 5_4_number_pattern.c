/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-11-28 09:51:51
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-11-28 10:10:49
*/



// 1
// 1 2 
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 

#include <stdio.h>

int main(int argc, char const *argv[])
{

	int i, j; 

	for (i = 1; i <= 5; i++) // ROW(s)
	{
		for (j = 1; j <= i; j++) // Col(s)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	return 0;
}