import functools


@functools.cache
def collatz(n: int) -> int:
    return collatz(n // 2 if n % 2 == 0 else n * 3 + 1) + 1 if n != 1 else 1


print(max(((i, collatz(i)) for i in range(1, int(10e5))), key=lambda x: x[1])[0])
