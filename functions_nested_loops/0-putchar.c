#include <stdio.h>
#include "main.h"

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

    for (int i = 0; text[i] != '\0'; i++)
    {
        putchar(text[i]);
    }

    return 0;
}

