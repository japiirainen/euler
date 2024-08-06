def fpds(n: int) -> int:
    return sum(int(x) ** 5 for x in str(n))


print(sum(n for n in range(2, int(10e5)) if n == fpds(n)))
