/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-05 10:08:12
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-05 10:23:46
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	char str[100];
	int strLength,i = 0,j,wordCount = 0;
	bool wordStart= true;

	printf("Enter your statement for word count\n");
	gets(str);

	strLength = strlen(str);

	for ( i = 0; i < strLength ; i++)
	{
		// Logic 1
		// if(str[i] == ' ' || i == strLength - 1)
		// {
		// 	wordCount++;
		// }

		// Logic 2 -- Valid and robust
		if(str[i] != ' ')
		{
			wordStart = true;
		}else if(str[i] == ' ' && wordStart == true)
		{
			wordCount ++;
			wordStart = false;
		}	
	}

	printf("word count : %d \n",wordCount);


	return 0;
}