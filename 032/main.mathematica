#!/usr/bin/env wolframscript -cloud -print

Cond[n_] := Select[Divisors[n],
  Function[x,
    DigitCount[n] + DigitCount[x] + DigitCount[n/x]
      == {1, 1, 1, 1, 1, 1, 1, 1, 1, 0}]] != {}

sum = 0;

For[i = 1, i < 10^4, i++,
  If[Cond[i],
    sum += i]]

sum
