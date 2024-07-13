#include <stdio.h>

unsigned collatz(unsigned start) {
  unsigned n = start, c = 1;

  while (n > 1) {
    n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    c++;
  }

  return c;
}

int main() {
  unsigned i, max_i = 0, max_c = 0;

  for (i = 1; i < 10e5; i++) {
    unsigned c = collatz(i);
    if (c > max_c) {
      max_c = c;
      max_i = i;
    }
  }

  printf("%u\n", max_i);

  return 0;
}
