#include <stdio.h>

int main() {
char c;

for (c = '0'; c <= '9'; c++) {
putchar(c);
}

for (c = 'a'; c <= 'f'; c++) {
putchar(c);
}

putchar('\n');

return 0;
}
