#include <stdio.h>

int palindrome(int n) {
  int reversed = 0, x = n;
  while (x) {
    reversed = (reversed * 10) + (x % 10);
    x /= 10;
  }
  return reversed == n;
}

int main(void) {
  int i, j, max = 0;

  for (i = 100; i < 1000; ++i) {
    for (j = 100; j < 1000; ++j) {
      int candidate = i * j;
      if (palindrome(candidate) && candidate > max)
        max = candidate;
    }
  }

  printf("%d\n", max);

  return 0;
}
