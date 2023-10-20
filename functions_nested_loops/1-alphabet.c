#include <stdio.h>
#include "main.h"
#define _XOPEN_SOURCE 700

/**
 * main - Entry point
 *
 * Description: Prints  _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
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


int main(void)
{

	print_alphabet();
	return (0);

}
