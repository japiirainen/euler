#include <assert.h>
#include <math.h>
#include <stdio.h>

#define ll long long

ll smallest_factor(ll n) {
  assert(n >= 2);
  ll i;
  for (i = 2; i < sqrt(n) + 1; ++i)
    if (n % i == 0)
      return i;
  return n;
}

int main(void) {
  ll n = 600851475143;

  for (;;) {
    ll f = smallest_factor(n);
    if (n > f)
      n = n / f;
    else
      break;
  }

  printf("%lld\n", n);

  return 0;
}
