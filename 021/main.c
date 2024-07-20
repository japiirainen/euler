#include <stdio.h>

unsigned divisorsum(unsigned n) {
  unsigned sum = 1;
  size_t k = n;

  size_t i;

  for (i = 2; i <= k; i++) {
    int p = 1;

    while (k % i == 0) {
      p *= i;
      k /= i;
    }

    sum *= (p * i - 1) / (i - 1);
  }

  return sum - n;
}

int main() {
  unsigned i, d, sum = 0;

  for (i = 2; i < 10000; i++) {
    d = divisorsum(i);
    if (i < divisorsum(i) && divisorsum(d) == i)
      sum += i + d;
  }

  printf("%u\n", sum);

  return 0;
}
