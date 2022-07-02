#include <stdio.h>

/**
 **main -> assign a random number to the variable n each time it is executed
 *
 **and print the last digit of the variable n
 *
 **Return: Alaways 0 (Success)
 *
 */

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{

putchar(ch);
}

putchar(10); /* this is an ascii code for ne line*/

return (0);
}
