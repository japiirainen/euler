#include <stdio.h>

#define ll long long

void swap(void *a, void *b) {
  void *t = a;
  a = b;
  b = t;
}

ll gcd(ll a, ll b) {
  if (a > b)
    swap(&a, &b);

  ll r;
  for (;;) {
    r = a % b;

    if (r == 0)
      break;

    a = b;
    b = r;
  }
  return b;
}

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

int main(void) {
  ll ans = 1;
  ll i;

  for (i = 1; i <= 20; ++i) {
    ans = lcm(ans, i);
  }

  printf("%lld\n", ans);

  return 0;
}
