#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the lowercase alphabet excluding 'q' and 'e',
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}

putchar('\n');

return (0);
}
