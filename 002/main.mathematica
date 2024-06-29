#!/usr/bin/env wolframscript -cloud -print

sum = 0

For[i = 0, (fib = Fibonacci[i]) <= 4000000, i++,
  If[EvenQ[fib],
    sum += fib]]

sum
