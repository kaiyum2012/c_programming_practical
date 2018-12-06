/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:39:57
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 08:50:19
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y,operation;

	printf("please enter two numbers \n");
	scanf("%d",&x);
	scanf("%d",&y);

	printf("Please Select your operation NO. e.g. \"1\" for Addition \n");
	printf("------------------------\n");
	printf("1. Addition\n");
	printf("2. Substraction \n");
	printf("3. Multiplcation \n");
	printf("4. Division\n");
	printf("5. Remainder\n");

	scanf("%d",&operation);

	switch(operation)
	{
		case 1: printf(" %d + %d = %d \n", x,y,x+y);
				break;

		case 2: printf(" %d - %d = %d \n", x,y,x-y);
				break;

		case 3: printf(" %d * %d = %d \n", x,y,x*y);
				break;		

		case 4: printf(" %d / %d = %d \n", x,y,x/y);
				break;
		
		case 5: printf(" %d %% %d = %d \n", x,y,x%y); // %% for printing "%"
				break;				

		default: printf("Not valid operation\n");
	}

	return 0;
}