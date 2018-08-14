#include <stdio.h>

int main(int argc, char const *argv[])
{
	int RollNumber;
	char Name[20];
	float Mark;

	// RollNumber = 34;
	// Mark = 34.5;

	printf("Enter Roll number \n");
	scanf("%d", &RollNumber);

	printf("Enter Name \n");
	// way 1
	// gets(Name);

	// way 2
	// fgets(Name,20,stdin);

	// way 3
	scanf("%s", Name);
	
	getchar();

	printf("Enter Mark \n");
	scanf("%f", &Mark);
	getchar();

	printf("Roll Number \t Name \t Mark \n");
	printf("%d \t %s \t %f \n",RollNumber,Name,Mark);

	return 0;
}