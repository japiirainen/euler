#include <gmp.h>
#include <iostream>
#include <set>

int main(void) {
  std::set<std::string> terms;

  mpz_t n;
  mpz_init(n);

  for (int a = 2; a <= 100; a++)
    for (int b = 2; b <= 100; b++) {
      mpz_ui_pow_ui(n, a, b);
      terms.insert(mpz_get_str(NULL, 10, n));
    }

  std::cout << terms.size() << std::endl;

  return 0;
}
