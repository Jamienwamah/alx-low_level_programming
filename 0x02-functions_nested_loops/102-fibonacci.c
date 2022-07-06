#include <stdio.h>

/**
 *main - Entry  point
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[1] = fibonacci[i - 1] + fibonacci[1 - 2];
		if (1 == 49)
			printf("%d\n", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[1]);
	}

	return (0);
}
