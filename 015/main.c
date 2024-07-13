#include <gmp.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  mpz_t n, m;

  // calculate the binomial coefficient of n m as
  // binomial n m := n! / (m! * m!)
  mpz_init(n);
  mpz_init(m);
  mpz_fac_ui(n, 40);
  mpz_fac_ui(m, 20);
  mpz_mul(m, m, m);
  mpz_divexact(n, n, m);

  char *str;
  str = mpz_get_str(NULL, 10, n);
  printf("%s\n", str);
  free(str);

  mpz_clear(n);
  mpz_clear(m);

  return 0;
}
