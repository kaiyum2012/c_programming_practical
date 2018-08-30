
#include <stdio.h>

int main(int argc, char const *argv[])
{
	

	unsigned int a=0,b=5,c;
  	unsigned short int x = 2;
  	signed short int usi = -2;
  	char y;

  	int i;
  	float f;

	c = a & b;

	printf(" a AND b is %d \n", c );

	c = a | b;
	printf(" a OR b is %d \n", c);

	c = a << 3;
	printf("A left shift = %d \n", c);

	c = b >> 1;
	printf("A right shift = %d \n", c);

	c = ~usi;
	printf("bitwise not %i \n", c);


	printf("signed number left shift %d \n", x<<1);

	printf("size of int %lu\n", sizeof(int));
	printf("size of float %lu\n", sizeof(float));
	printf("size of unsigned int %lu\n", sizeof(unsigned int));
	printf("size of double %lu\n", sizeof(double));

	return 0;

}