/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-05 09:19:03
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-05 09:49:14
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
	
	char word[] ={};
	int i,j,wordLength;
	bool isPalindrome = false;

	printf("please enter you word for test\n");
	gets(word);

	wordLength = strlen(word);

	for (i = 0,j = wordLength - 1; i < wordLength; i++,j--)
	{
		printf(" %c \t %c \n", word[i],word[j]);
		if(word[i] !=word[j])
		{
			isPalindrome = false;
			break;
		}
		isPalindrome = true;
	}


	if(isPalindrome)
	{
		printf("%s is Palindrome\n",word);
	}
	else
	{
		printf("%s is not Palindrome\n",word);
	}

	return 0;
}