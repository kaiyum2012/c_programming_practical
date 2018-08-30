/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-30 10:42:29
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-30 11:01:12
*/


/**
 * algo 
 * 1. get input (alphabet)
 * 2. check input is 'a','e','i','o','u'
 *     if yes => inout is vowel 
 *     else 
 *       input is not a vowel
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
	
	char alphabet;

	// step 1
	// get input (alphabet)

	printf("Enter alphabet \n");
	scanf("%c" , &alphabet);

	// step 2
	// check input is 'a','e','i','o','u'
	//     if yes => inout is vowel 
	//    else 
    //      input is not a vowel

	if(alphabet == 'a' || alphabet == 'e' || alphabet == 'i' 
		|| alphabet == 'o' || alphabet == 'u' )
	{
		printf(" Entered alphabet %c is vowel \n", alphabet);
	}
	else
	{
		printf(" Entered alphabet %c is not a vowel \n", alphabet);
	}

	return 0; // getch();
}