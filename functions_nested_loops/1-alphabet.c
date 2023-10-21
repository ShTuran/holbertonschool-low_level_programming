#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Description:  print_alphabet - Prints the lowercase alphabet followed by a newline.
 *
 *
 * Return: Always 0 (Success)
 */


/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
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



