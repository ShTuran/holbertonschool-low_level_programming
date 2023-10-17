#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints the alphabet in lowercase
 * 
 *
 * Return: Always 0 (Success)
 */

int main (void)
{	
	char letter = 'a';

	while (letter<='z')
{
		putchar(letter);
		letter++;
}
	purchar('\n');

	return (0);
}
