/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-30 09:09:02
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-30 09:12:53
*/
#include <stdio.h>	

int main(int argc, char const *argv[]) // void main()
{
	int N,i=1;

	printf("Please enter Number you want to draw a table,except 0 \n");
	scanf("%d", &N);

	printf("Number Table for %d \n",N);
	printf("-------------------------------- \n");
		
	while(i <= 10){
		printf("%d * %d = %d\n",N,i,N*i);	
		i = i + 1;
	}

	return 0; // getch();
}