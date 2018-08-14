#include <stdio.h>

int main(int argc, char const *argv[])
{
	int TotalNumOfEven = 2;
	int sum = 0, i=1, count = 0;

	printf("How many Even numbers you want to sum up?\n");
	scanf("%d",&TotalNumOfEven);
	
	while(count < TotalNumOfEven){
		if(i %2==0){
			sum+=i;
			count++;
		}
		i++;
	}

	printf("sum of first %d even number is %d \n",TotalNumOfEven,sum);

	return 0;
}