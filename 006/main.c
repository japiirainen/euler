#include <stdio.h>

#define ll long long

int main(void) {
  ll n = 100;
  ll sumOfSquares = (n * (n + 1) * (2 * n + 1)) / 6;
  ll sum = n * (n + 1) / 2;

  printf("%lld", sum * sum - sumOfSquares);

  return 0;
}
