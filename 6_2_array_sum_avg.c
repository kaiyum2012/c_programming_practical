/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-05 08:55:48
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-05 09:18:00
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int Numbers[5]={},temp,arraySize=5,sum;
	float avg;
	int i,j;


	printf("Please enter 5 Numbers for sum and Avg \n");

	for (int i = 0; i < 5; i++)
	{		
		scanf("%d",&Numbers[i]);
	}

	for (i = 0; i < arraySize; i++) // for all array element
	{
		sum = sum + Numbers[i];
	}

	avg = sum / arraySize;


	printf("sum of array elements : %d\n", sum);
	printf("Average of array elements: %.2f \n", avg);
	return 0;
}