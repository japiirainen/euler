from itertools import islice, permutations

print("".join(map(str, next(islice(permutations(range(10)), 999_999, None)))))
