from functools import cache


@cache
def fib(n: int) -> int:
    return fib(n - 1) + fib(n - 2) if n > 2 else 1


n_digits, n = 1, 1

while n_digits < 1000:
    n += 1
    n_digits = len(list(str(fib(n))))

print(n)
