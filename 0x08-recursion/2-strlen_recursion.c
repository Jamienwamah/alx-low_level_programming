#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *@l: The length
 *@s: The string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(++s) + 1);
}
