zero_twenty = [
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
    "ten",
    "eleven",
    "twelve",
    "thirteen",
    "fourteen",
    "fifteen",
    "sixteen",
    "seventeen",
    "eighteen",
    "nineteen",
]

tens = [
    "",
    "",
    "twenty",
    "thirty",
    "forty",
    "fifty",
    "sixty",
    "seventy",
    "eighty",
    "ninety",
]


def translate(n: int) -> str:
    if n < 20:
        return zero_twenty[n]
    elif n < 100:
        return f"{tens[n//10]}{zero_twenty[n%10] if n%10 != 0 else ''}"
    elif n < 1000:
        return f"{zero_twenty[n // 100]}hundred{'and' + translate(n%100) if n%100 != 0 else ''}"
    elif n < 1_000_000:
        return f"{zero_twenty[n // 1000]}thousand{'and' + translate(n%1000) if n%1000 != 0 else ''}"

    raise ValueError("`translate` only supported for `n` up to one million.")


print(sum(map(len, map(translate, range(1, 1001)))))
