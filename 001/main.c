#include <stdio.h>

int main(void) {
  int i;
  long long sum = 0;

  for (i = 3; i < 1000; ++i)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;

  printf("%lld", sum);

  return 0;
}
