n = int(10e6)
target = 10001
prime_count = 0

sieve = [True] * n
sieve[0] = sieve[1] = False

for i in range(n):
    if sieve[i]:
        prime_count += 1
        if prime_count == target:
            print(i)
            break
        for j in range(i * 2, len(sieve), i):
            sieve[j] = False
