#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a,b,c,D;
	float root1,root2;
	// a=2;b=4;c=2;

	printf("Enter a \n");
	scanf("%d", &a);

	printf("Enter b \n");
	scanf("%d", &b);

	printf("Enter c \n");
	scanf("%d", &c);

    D = (b * b) - (4 * a * c);
   // printf("%d\n",b * b);
	// checking for root is possible or not ?
	if(D >= 0) {
		root1 = ((-1)* b - sqrt(D)) / (2 * a); 	
		root2 = ((-1)* b + sqrt(D)) / (2 * a); 	

		printf("Quadratic roots are %.2f and %.2f \n",root1,root2);
	}else{
		printf("Root is imagenary, so we can't find it \n");
	}

	return 0;
}