#include "main.h"

/**
 *_isalpha - controls if a character is an alphabet or not
 *@c: character to be verified
 *Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
