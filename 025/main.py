from functools import cache


@cache
def fib(n: int) -> int:
    return fib(n - 1) + fib(n - 2) if n > 2 else 1


n = 1

while fib(n) < 10**999:
    n += 1

print(n)
