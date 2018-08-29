#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{ 
	
	int LastNumber,sum=0;
	int counter = 1;
	//1. Input Last number of a series 
    printf("Enter N (Last Number) of a series \n");
    scanf("%d",&LastNumber);

    // 2 & 3. start from 1 To Last Number and sum 
    //  (LOOP)

    while( counter <= LastNumber ){

    	sum = sum + counter;	

    	counter = counter + 1;
    }

    printf("Sum = %d\n", sum );



 	// for 
 	// while 
    // do {}while()

	return 0; //getch();
}