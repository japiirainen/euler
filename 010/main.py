N = int(2e6)


def sieve():
    xs = [True] * N
    xs[0] = xs[1] = False
    for i in range(2, N):
        if xs[i]:
            for j in range(i * 2, N, i):
                xs[j] = False
    return xs


print(sum(i for i, is_prime in enumerate(sieve()) if is_prime))
