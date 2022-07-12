#include "main.h"

/**
 *int _strlen - function returns the length of a string
 *@s: Length of a string
 *
 *Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
