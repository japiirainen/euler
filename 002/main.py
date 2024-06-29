from itertools import takewhile

def fibs():
    a, b = 0, 1
    while True:
        a, b = b, a + b
        yield b

if __name__ == "__main__":
    print(sum(takewhile(lambda x: x <= int(4e6), filter(lambda x: x % 2 == 0, fibs()))))
