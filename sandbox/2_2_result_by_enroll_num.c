#include <stdio.h>

int main(int argc, char const *argv[])
{
	int RollNumber;
	char Name[20]; // sting having 20 char length
	// char Name;

	float Mark;

	// RollNumber = 34;
	// Mark = 34.5;
	// Assume that Roll number is Numeric Only
	printf("Enter Roll number \n");
	scanf("%d", &RollNumber);

	printf("Enter Name \n");
	// way 1
	// gets(Name);

	// way 2	
	// fgets(Name,20,stdin);

	// way 3
	scanf("%s", Name);
	
	// scanf("%c",&Name);

	getchar();

	printf("Enter Mark \n");
	scanf("%f", &Mark);
	getchar();

	printf("Roll Number\tName\tMark \n");
	printf("%d \t %s \t %f \n",RollNumber,Name,Mark);

	return 0; // getch();
}