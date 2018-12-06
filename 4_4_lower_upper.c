/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:34:30
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 08:38:38
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;

	printf("Enter your alphabate (character) \n");
	scanf("%c",&ch);

	if(ch >=97 && ch<=122)
	{
		printf("character \"%c\" is Lower case \n", ch);
	}
	else if(ch >=65 && ch<=91)
	{
		printf("character \"%c\" is Upper case \n", ch);
	}
	else
	{
		printf("opps!, that's not a alphabate \n");
	}

	return 0;
}