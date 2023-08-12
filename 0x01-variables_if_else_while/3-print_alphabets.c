#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the lowercase and uppercase alphabets
 * followed by a newline character.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n');

return (0);
}
