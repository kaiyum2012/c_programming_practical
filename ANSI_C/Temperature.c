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
		printf("2. for Celsius to Celsius\n");
		printf("x. for Exit \n");
		switch(ch = getchar()){
			case '1': printf("enter Temprature \n");
			scanf("%f",&Temp);
			printf("%5.2f Fehrerhite = %5.2f Celsius\n",Temp,FerToCel(Temp));
			break;

			case '2': printf("enter Temprature \n");
			scanf("%f",&Temp);
			printf("%5.2f Celsius = %5.2f Fehrerhite\n",Temp,CelToFer(Temp));
			break;

			case 'x': return 0;
			default:
			printf("\n /***************************/\n");
			printf("Please choose correct option \n");
			printf("\n /***************************/\n");

			break;
		}
	}while(ch != 'x');
	//return 0;
}

float FerToCel(float Temp){
	return ((Temp - 32) * 5)/9;
}

float CelToFer(float Temp){
	return (9*Temp)/5 + 32;
}