#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the digits and lowercase hexadecimal characters,
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}

for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}

putchar('\n');

return 0;
}
