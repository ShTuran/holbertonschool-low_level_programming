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
int main(void)
{
	const char *text = "_putchar\n";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		putchar(text[i]);
	}


	return (0);
}

