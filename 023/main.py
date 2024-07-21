import math

from itertools import chain

LIM = 28123


def proper_divisors(n: int) -> set[int]:
    return set(
        chain.from_iterable(
            [i, n // i] for i in range(1, math.isqrt(n) + 1) if n % i == 0
        )
    ) - set([n])


abundants = [i for i in range(1, LIM) if sum(proper_divisors(i)) > i]

print(
    sum(
        set(range(1, LIM))
        - {a + b for a in abundants for b in abundants if a + b < LIM}
    )
)
