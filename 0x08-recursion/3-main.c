#include "main.h"
#include <stdio.h>

/**
 *main - check the code
 *
 *Return: Always 0.
 */
int main(void)
{
	int r;

	r = factoral(1);
	printf("%d\n", r);
	r = factoral(5);
	printf("%d\n", r);
	r = factoral(10);
	printf("%d\n", r);
	r = factoral(-1024);
	printf("%d\n", r);
	return (0);
}
