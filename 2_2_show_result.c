/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 08:14:41
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 09:31:32
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int roll_no;
	float mark;
	char ch;

	printf("Enter roll number\n");
	scanf("%d",&roll_no);

	printf("Enter Subject Code (e.g. M = Maths) \n");
	scanf(" %c",&ch);

	printf("Enter Mark\n");
	scanf("%f",&mark);

	printf("----------------------------\n");
	printf("---------- Result-----------\n");
	printf("----------------------------\n");
	printf("Roll Number \t Subject Code \t Mark\n");
	printf("%d \t\t %c \t\t %.2f", roll_no,ch,mark);

	return 0;
}