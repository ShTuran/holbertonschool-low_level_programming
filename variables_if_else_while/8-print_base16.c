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


	while (digit <= 0xf)
	{

		putchar(digit);
		digit++;


	}

	putchar('n');

	return (0);

}
