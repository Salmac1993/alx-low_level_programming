#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print single-digit numbers separated by commas and spaces,
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');

if (num < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return(0);
}
