#include "main.h"

/**
 * get_endianness - check the endian status
 *
 * Return: 1 if big 0 if little
 */
int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
	return (1);
	return (0);
}
