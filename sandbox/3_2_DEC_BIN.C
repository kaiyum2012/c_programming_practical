#include <stdio.h>

int main(int argc, char const *argv[])
{
	int decimal,i =1;
	int bit;
	long int binary = 0;

	printf("Enter your decimal number \n");
	scanf("%d", &decimal);

	while (decimal > 0)
	{
	  	bit = decimal % 2; // Remainder part 
	  	decimal = decimal / 2; 

	  	binary = binary + (i * bit);

	  	i = i * 10;

	  	printf("%d\n" , i);

	}

	printf("from decimal %d  = %ld binary \n",decimal,binary);

	return 0;
}