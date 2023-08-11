#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int n;

// Seed the random number generator with the current time
srand(time(NULL));

 // Generate a random number between INT_MIN and INT_MAX
n = rand();

// Determine whether the number is positive, zero, or negative
 if (n > 0) {
printf("The number %d is positive\n", n);
} else if (n == 0) {
printf("The number %d is zero\n", n);
} else {
 printf("The number %d is negative\n", n);
 }

return 0;
}
