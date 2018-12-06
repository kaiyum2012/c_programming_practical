/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:54:52
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 08:57:40
*/

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	int num1,num2,num3;

	// take 3 (different) numbers for comparision
	printf("Enter 3 Numbers \n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	if(num1 > num2 && num1 > num3){
		printf("%d is Max number \n", num1);	
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("%d is Max number \n", num2);
	}
	else
	{
		// num3 is bigger
		printf("%d is Max number \n", num3);	
	}
	
	return 0; // getch();
}