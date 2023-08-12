#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the numbers from 0 to 9, followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

putchar('\n');

return (0);
}
