#include <stdio.h>

/**
 *bbmain - fucntion executed before main
 *
 * Return: Always 0.
 */
void __attribute__ ((constructor)) bbmain()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
