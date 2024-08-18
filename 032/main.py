import math


def cond(n: int) -> bool:
    for i in range(1, math.isqrt(n) + 1):
        if n % i == 0:
            if "".join(sorted(str(n) + str(i) + str(n // i))) == "123456789":
                return True
    else:
        return False


print(sum(n for n in range(10_000) if cond(n)))
