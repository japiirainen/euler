import math

from itertools import count
from functools import reduce


def is_prime(n: int) -> bool:
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, math.isqrt(n) + 1, 2):
        if n % i == 0:
            return False
    return True


def count_consecutive_primes(a: int, b: int) -> int:
    for n in count():
        x = (n * n) + (a * n) + b
        if not is_prime(x):
            return n
    return 0


def reducer(acc: tuple[int, int], x: tuple[int, int]) -> tuple[int, int]:
    (m_primes, m_prod), (a, b) = acc, x
    res = count_consecutive_primes(a, b)
    return (res, a * b) if res > m_primes else (m_primes, m_prod)


print(
    reduce(
        reducer, ((a, b) for a in range(-999, 1000) for b in range(2, 1000)), (0, 0)
    )[1]
)
