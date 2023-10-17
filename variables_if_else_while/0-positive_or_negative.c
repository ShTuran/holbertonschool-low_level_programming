#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* 
 * main- Entry point
 *
 * Description - This is the main function that generates a random number
 * and determines if it's negative, zero, or positive, then prints the result
 *
 * Return: Always 0 (Success)
 */

 int main(void)
 {
     int n;

     srand(time(0));
     n = rand() - RAND_MAX / 2;


     if (n<0)
     {
         printf("%d is negative\n",n);	

     }

     else if (n==0)
     {
	printf("%d is zero\n",n );
     }

      else
     {
        printf("%d is positive\n",n);
     } 

	return (0);
  }
