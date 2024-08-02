#include <iostream>
#include <ostream>

bool is_prime(int n) {
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0)
    return false;
  for (int i = 3; i < sqrt(n); i += 2)
    if (n % i == 0)
      return false;
  return true;
}

int count_consecutive_primes(int a, int b) {
  for (int n = 0;; n++)
    if (!is_prime(n * n + a * n + b))
      return n;
  return 0;
}

int main(void) {
  int max_primes, max_prod = 0;
  for (int a = -999; a < 1000; a++)
    for (int b = -1000; b <= 1000; b++) {
      auto res = count_consecutive_primes(a, b);
      if (res > max_primes) {
        max_primes = res;
        max_prod = a * b;
      }
    }

  std::cout << max_prod << std::endl;

  return 0;
}
