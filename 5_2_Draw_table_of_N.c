/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-04 08:39:11
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 08:40:08
*/
#include <stdio.h>	

int main(int argc, char const *argv[]) // void main()
{
	int N,i;

	printf("Please enter Number you want to draw a table,except 0 \n");
	scanf("%d", &N);

	printf("Number Table for %d \n",N);
	printf("-------------------------------- \n");
		
	for (i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n",N,i,N*i);	
	}

	return 0; // getch();
}