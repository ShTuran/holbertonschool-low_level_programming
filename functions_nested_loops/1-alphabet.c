#include <stdio.h>
#include "main.h"

/**
*main - Entry point
*
*Description: Prints  _putchar, followed by a new line.
*
*Return: Always 0 (Success)
*/


void print_alphabet(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}



