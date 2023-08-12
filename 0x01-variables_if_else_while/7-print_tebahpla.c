#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the lowercase alphabet in reverse order,
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}

putchar('\n');

return (0);
}
