/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:27:41
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 08:33:41
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int year;
	printf("Please enter Year \n");
	scanf("%u",&year);

	if(year % 4 == 0)
	{
		printf("year %u is a Leap year\n", year );
	}
	else
	{
		printf("year %u is not a Leap year\n", year );
	}
	
	return 0;
}