#include <stdio.h>

int pythagorean_triplet(size_t a, size_t b, size_t c) {
  return a * a + b * b == c * c;
}

int main(void) {
  size_t a, b;

  for (a = 1; a < 1000; a++) {
    for (b = a; b < 1000; b++) {
      size_t c = 1000 - a - b;
      if (pythagorean_triplet(a, b, c)) {
        printf("%lld\n", (long long)(a * b * c));
        break;
      }
    }
  }

  return 0;
}
