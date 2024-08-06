from functools import cache


@cache
def ways(coins: tuple[int, ...], n: int) -> int:
    if not len(coins) and n == 0:
        return 1

    if not len(coins):
        return 0

    c, cs = coins[0], coins[1:]

    return sum(ways(cs, n - i * c) for i in range((n // c) + 1))


print(ways((1, 2, 5, 10, 20, 50, 100, 200), 200))
