#include <stdio.h>	

int main(int argc, char const *argv[])
{
	int N;

	printf("Please enter Number you want to draw a table,except 0 \n");
	scanf("%d", &N);

	printf("Your Number Table for %d is \n",N);
	printf("-------------------------------- \n");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n",N,i,N*i);
	}

	return 0;
}