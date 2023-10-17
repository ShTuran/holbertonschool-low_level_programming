#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase  and uppercase
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char letter = 'a';
	
	while(letter <= 'z')
{
		pucthar(letter);
		letter++;
}


	letter = 'A';

	while(letter <= 'Z')
{
		putchar(letter);
		letter++;

}
	putchar('\n');


	result(0);



}
