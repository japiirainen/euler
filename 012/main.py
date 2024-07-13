import math
import sys

from itertools import chain
from collections.abc import Generator


def triangles() -> Generator[int, None, None]:
    for n in range(sys.maxsize):
        yield (n * (n + 1)) // 2


def factors(n: int) -> set[int]:
    return set(
        chain.from_iterable(
            ([i, n // i] for i in range(1, math.isqrt(n) + 1) if n % i == 0)
        )
    )


for t in triangles():
    if len(factors(t)) >= 500:
        print(t)
        break
