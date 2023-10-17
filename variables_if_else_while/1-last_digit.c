#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: This is the main function that generates a random number
 * and determines if it's last digit is greater than 5, zero, or less than 6 and not 0, then prints the result
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit>5)
	{
		printf("Last digit of %d is greater than 5\n",n);
	}
	else if (lastDigit==0)
	{
		printf("Last digit of %d is 0\n",n);
	}
	else
	{
		printf("Last digit of %d and is less than 6 and not 0\n",n)

	}


	return (0);
}
