#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N,sum=0;

	printf("Enter Last number \n");
	scanf("%d",&N);

	for (int i = 1; i <= N; i++)
	{
		sum += i;
	}
	printf("sum of numbers : 1 to %d = %d \n",N,sum);
	return 0;
}