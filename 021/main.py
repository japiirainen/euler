divisorsum = [0] * 10000

for i in range(1, len(divisorsum)):
    for j in range(i * 2, len(divisorsum), i):
        divisorsum[j] += i

print(
    sum(
        i
        for i, s in enumerate(divisorsum)
        if i != s and s < len(divisorsum) and divisorsum[s] == i
    )
)
