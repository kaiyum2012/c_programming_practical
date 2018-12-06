/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-12-06 09:32:22
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-12-06 10:19:52
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int u;
	int a,b;
	float f;
	double d;

	printf("Enter value of a & b (Integers)\n");
	scanf("%d %d",&a,&b);

	printf("Enter value of u (unsigned integer) \n");
	scanf("%u",&u);

	printf("Enter value of f (Float)\n");
	scanf("%f",&f);

	printf("Enter value of d (Double) \n");
	scanf("%le",&d);

	printf("You have entered values\n");
	printf(" a = %d \n b= %d \n u = %u \n f = %f \n d = %f", a,b,u,f,d);

	printf("Implicit conversion\n");
	printf("Float to integer\n");
	a = f; // Float f assign to Integer a
	printf("new value of a = %d\n",a);
	
	printf("Explicit Conversion\n");
	b = (int) d;
	printf("new value of b = %d \n", b);

	return 0;
}