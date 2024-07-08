#include <stdio.h>
#include <stdlib.h>

#define N 2e6

void sieve(int *_sieve) {
  (void)_sieve;
  size_t i;
  _sieve[0] = 1;
  _sieve[1] = 1;
  for (i = 2; i < N; i++) {
    if (!_sieve[i]) {
      size_t j;
      for (j = i * 2; j < N; j += i)
        _sieve[j] = 1;
    }
  }
}

int main(void) {
  int *_sieve;
  _sieve = calloc(N, sizeof *_sieve);

  sieve(_sieve);

  size_t i;
  unsigned long long sum = 0;

  for (i = 0; i < N; i++)
    if (!_sieve[i])
      sum += i;

  free(_sieve);

  printf("%lld\n", sum);

  return 0;
}
