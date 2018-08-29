#include <stdio.h>

float FerToCel(float Temp);
float CelToFer(float Temp);

int main(int argc, char const *argv[])
{
	float Temp;
	char ch;
	do {
		// Giving user choice 
		printf("choose an option\n");
		printf("1. for Fehrerhite to Celsius\n");
		printf("2. for Celsius to Fehrerhite\n");
		printf("x. for Exit \n");

		// ch = getchar();

		scanf(" %c",&ch);

		switch(ch){
			case '1': printf("Enter Temprature \n");
			scanf("%f",&Temp);
			printf("%5.2f Fehrenhite = %5.2f Celsius\n \n",Temp,FerToCel(Temp));
			
			break;

			case '2': printf("Enter Temprature \n");
			scanf("%f",&Temp);
			printf("%5.2f Celsius = %5.2f Fehrenhite\n \n",Temp,CelToFer(Temp));

			break;

			case 'x':
			case 'X' : return 0; break; 
			
			default:
			printf("/***************************/\n");
			printf("   Please choose correct option \n");
			printf("/***************************/\n");

			break;
		}
		printf("Press any key to continue .....\n");
		getchar();

	}while(ch != 'x');
	//return 0;
}

float FerToCel(float Temp){
	return ((Temp - 32) * 5)/9;
}

float CelToFer(float Temp){
	return (9*Temp)/5 + 32;
}