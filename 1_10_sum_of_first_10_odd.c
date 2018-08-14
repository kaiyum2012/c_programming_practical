#include <stdio.h>

int main(int argc, char const *argv[])
{
	int TotalOddNumber = 10;
	int count = 0, i=1,sum =0;

	// printf("How many odd numbers you want to sum up?\n");
	// scanf("%d",&TotalOddNumber);

	while(count <TotalOddNumber){
		if(i %2 != 0){
			sum+=i;
			count ++;
		}
		i++;
	}

	printf("sum of first %d odd numbers = %d \n",TotalOddNumber,sum);
	
	return 0;
}