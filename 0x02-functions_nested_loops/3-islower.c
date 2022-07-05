#include <stdio.h>
#include "main.h"

/**
 * _islower: function that controls if a character is in  lowercase
 * Description: lowercase character to be verified
 *
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	return (0);
}	
