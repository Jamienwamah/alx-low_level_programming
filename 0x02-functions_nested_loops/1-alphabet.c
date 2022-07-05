#include <stdio.h>
#include "main"

/**
 *print alphebet - function that prints alphebet
 *It prints in lowercase
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar (letter);
	}
	_putchar (10);
}
