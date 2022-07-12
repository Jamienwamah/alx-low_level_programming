#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers, followed by a new line
 *@a: The array
 *@n: The number of the elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], i != n - 1 ? " , " : "");
	printf("\n");
}
