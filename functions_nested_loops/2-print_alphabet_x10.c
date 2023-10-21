#include <stdio.h>
#include "main.h"


/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times, followed by a newline.
 */

void print_alphabet_x10(void)
{
	int a = 0;


	while (a < 10)
	{

		char letter = 'a';

		while (letter <= 'z')
		{

			putchar (letter);
			letter++;

		}

		a++;


		if (a < 10)
			putchar('\n');
	}

	putchar ('\n');

}
