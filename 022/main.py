print(
    sum(
        sum(map(lambda c: ord(c) - 64, list(x))) * (i + 1)
        for i, x in enumerate(
            sorted(map(eval, open("names.txt").read().strip().split(",")))
        )
    )
)
