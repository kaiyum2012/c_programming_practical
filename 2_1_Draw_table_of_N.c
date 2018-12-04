 /*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-30 09:09:02
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-04 08:41:47
*/
#include <stdio.h>	

int main(int argc, char const *argv[]) // void main()
{
	int N,i=1;

	printf("Please enter Number you want to draw a table,except 0 \n");
	scanf("%d", &N);

	printf("Number Table for %d \n",N);
	printf("-------------------------------- \n");
		
	printf("%d * 1 = %d\n",N,N*1);	
	printf("%d * 2 = %d\n",N,N*2);	
	printf("%d * 3 = %d\n",N,N*3);	
	printf("%d * 4 = %d\n",N,N*4);	
	printf("%d * 5 = %d\n",N,N*5);	
	printf("%d * 6 = %d\n",N,N*6);	
	printf("%d * 7 = %d\n",N,N*7);	
	printf("%d * 8 = %d\n",N,N*8);	
	printf("%d * 9 = %d\n",N,N*9);	
	printf("%d * 10 = %d\n",N,N*10);

	return 0; // getch();
}