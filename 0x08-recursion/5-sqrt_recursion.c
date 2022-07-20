#include "main.h"

/**
 *get_sqrt - tries to get the square root of n by continously
 *comparing the square of 'possible_root' to n
 *@n: the number
 *@possible_root: a possible root of n
 *
 *Return: square root of n, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int square = pssible_root * possible_root;

	if (square == n)
		return (possible_root);
	if (square < n)
		return (get_sqrt(n, ++possible_root));

	return (-1);
}
