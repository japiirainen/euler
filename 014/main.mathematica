#!/usr/bin/env wolframscript -cloud -print

Collatz[0] := 0
Collatz[1] := 1
Collatz[n_] := Block[{res = Collatz[If[EvenQ[n], n / 2, n * 3 + 1]] + 1},
  If[n < 10^5, Collatz[n] = res, res]]

maxI = 0;
maxC = 0;

For[i = 1, i < 10 ^ 6, i++,
  Block[{c = Collatz[i]},
    If[c > maxC,
      maxC = c;
      maxI = i]]]

maxI
