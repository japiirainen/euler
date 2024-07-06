#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *sieve;
  sieve = calloc(10e6, sizeof *sieve);
  size_t prime_count = 0;

  size_t i;

  for (i = 2; i < 10e6; i++) {
    if (!sieve[i]) {
      prime_count++;

      if (prime_count == 10001) {
        printf("%lu\n", i);
        break;
      }

      size_t j;

      for (j = i * 2; j < 10e6; j += i)
        sieve[j] = 1;
    }
  }

  free(sieve);

  return 0;
}
