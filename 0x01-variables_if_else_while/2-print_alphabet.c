#include <stdio.h>

int main() {
char c = 'a';
putchar(c);

while (c < 'z') {
c++;
putchar(c);
}

putchar('\n');

return 0;
}
