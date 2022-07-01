#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        printf("Enter a number\n");
	scanf("%d", &number);
	if(number>=0);
		printf("%d is a positive number\n", number);
	else
		printf("%d is a negative number\n", number)
	/* your code goes there */
	return (0);
}
