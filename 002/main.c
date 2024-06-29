#include <stdio.h>

int main(void) {
  long long a = 1, b = 2, sum = 2;

  while (b <= 4e6) {
    long long x = a + b;
    sum += x * !(x % 2);
    a = b;
    b = x;
  }

  printf("%lld\n", sum);

  return 0;
}
