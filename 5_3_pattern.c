/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-10-30 09:30:51
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-10-30 10:22:47
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i,j,row = 5 ,column = 9;


	int start=0,end=column +1;

	for (i = 1; i <= row; i++)
	{
	
		for ( j = 1 ; j <= column; j++)
		{
			if(j <=start || j >=end)
			{
				printf("\t");
			}else
			{
				printf("*\t");
			}
		}
		start++;
		end--; 
		
		printf("\n");
	}	
	return 0;
}