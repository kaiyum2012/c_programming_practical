#include <stdio.h>


int main(int argc, char const *argv[]) // void main()
{ 
	int divisor,dividend;
	float product,remainder,quotient;


	printf("Enter dividend\n");
	scanf("%d", &dividend);

	printf("Enter divisor\n");
	scanf("%d",&divisor);


	// TODO:: Question
	// 
	// 1. Find Product = * Done 
	
	product = divisor * dividend;
	printf("Product of %d and %d is %.3f\n", dividend,divisor,product);
	
	// 2. Find Quotient = / 
	quotient = dividend / divisor;	
	printf("Quotient for dividend = %d and divisor = %d is %f\n",dividend,divisor,quotient);

	// 3. Find Remainder = %
	remainder = dividend % divisor;
	printf("Remainder for dividend = %d and divisor = %d is %f\n",dividend,divisor,remainder);

	return 0; // getch();
}