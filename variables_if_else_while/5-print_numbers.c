#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the digits 0-9
 *
 * Return: Always 0 (Success)
 */


int main (void)
{
	int digit = 0 ;

	while (digit<10)
	{

		puthcar('0'+digit);
		digit++;

	}
	
	putchar('\n');



	return (0);
}
