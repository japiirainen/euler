import math


def smallest_factor(n: int) -> int:
    assert n >= 2
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return i
    return n


while True:
    n = 600851475143
    f = smallest_factor(n)
    if n > f:
        n //= f
    else:
        print(n)
        break
