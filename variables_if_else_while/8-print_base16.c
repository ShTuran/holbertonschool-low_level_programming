#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;


	while (digit <= 0x9)
	{

		putchar(digit + '0');
		digit++;

	}



	digit = 0xa;

	while (digit <= 0xf)
	{

		putchar(digit + 'a' - 10 );
		digit++;

	}



	putchar('\n');

	return (0);

}
