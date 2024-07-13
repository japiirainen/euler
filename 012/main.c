#include <math.h>
#include <stdio.h>

unsigned num_divisors(unsigned long n) {
  unsigned d = 0;
  unsigned long i;

  for (i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      d += 2;
    }
  }

  return d * d == n ? d - 1 : d;
}

unsigned long triangle(unsigned n) { return (n * (n + 1)) / 2; }

int main(void) {
  unsigned long i = 1;

  while (num_divisors(triangle(i)) <= 500)
    i++;

  printf("%lu\n", triangle(i));

  return 0;
}
