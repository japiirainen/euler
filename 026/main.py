def rec_cycle_len(n: int) -> int:
    seen: dict[int, int] = {}
    i, x = 0, 1
    while x not in seen:
        seen[x] = i
        x = x * 10 % n
        i += 1
    return i - seen[x]


print(max(range(1, 1000), key=rec_cycle_len))
