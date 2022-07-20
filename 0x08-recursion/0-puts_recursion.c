#include "main.h"

/**
 *main - prints a string,
 *followed by a new line
 *@s: The string
 *
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
