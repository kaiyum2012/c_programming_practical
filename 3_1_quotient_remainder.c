/*
* @Author: Abdulkaiyum Shaikh
* @Date:   2018-08-31 11:04:09
* @Last Modified by:   Abdulkaiyum Shaikh
* @Last Modified time: 2018-08-31 11:41:11
*/
/**
 *
 * Algo
 *
 * 1. Take dividend and divisor 
 * 2. calculate quotient 
 *     quotient = divident / divisor 
 *    calculate remainder
 *     remainder = dividend % divisor 
 * 3. print outputs  
 */


#include <stdio.h>

int main(int argc, char const *argv[]) // void main()
{
   int dividend,divisor;
   float quotient,remainder,product;
   
   // 1. take inputs 
   printf("Enter dividend \n");
   scanf("%d",&dividend);

   printf("Enter divisor \n");
   scanf("%d",&divisor);


   // 2. calculate quotient 
   quotient = dividend / divisor;
   // printf("quotient for %d / %d is %f \n",dividend,divisor,quotient);

   remainder = dividend % divisor;
   // printf("remainder for dividend = %d and divisor =%d  is %f \n",dividend,divisor,remainder);

   product = dividend * divisor;

   printf("for dividend = %d and divisor = %d, product = %f, quotient = %f and remainder = %f \n",dividend,divisor,product,quotient,remainder );
   return 0; // getch();
}
