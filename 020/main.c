#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  mpz_t n;

  mpz_init(n);
  mpz_fac_ui(n, 100);

  char *out;
  out = mpz_get_str(NULL, 10, n);

  unsigned sum = 0;

  size_t i;
  for (i = 0; out[i]; i++)
    sum += out[i] - '0';

  printf("%u\n", sum);

  free(out);
  mpz_clear(n);

  return 0;
}
