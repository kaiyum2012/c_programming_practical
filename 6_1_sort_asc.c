/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-05 08:22:53
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-05 08:58:22
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int Numbers[10]={},temp,arraySize=10;
	int i,j;


	printf("Please enter 10 Numbers for sort in Ascending \n");

	for (int i = 0; i < 10; i++)
	{		
		scanf("%d",&Numbers[i]);
	}

	//  Logic for Sort numbers in Acsending order 
	// { a,b,c,d,......}
	// compare numbers starting from 0th index to reset of the element (loop) 
	// if number is smaller than current(index) element than swap numbers 
	// else
	// do nothing 
	
	for (i = 0; i < arraySize; i++) // for all array element
	{
		for(j = i+1; j < arraySize; j++)
		{
			// printf("comparator element = %d \n", Numbers[i]);
			if(Numbers[i] > Numbers[j])
			{
				// printf("found smaller element = %d \n", Numbers[j]);
				temp = Numbers[j];
				Numbers[j] = Numbers[i];
				Numbers[i] = temp;
			}
		}
	}
	printf("Acsending sorted Numbers are : ");
	for (int i = 0; i < arraySize; i++)
	{
		printf("%d \t",Numbers[i]);
	}

	return 0;
}