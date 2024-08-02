#!/usr/bin/env wolframscript -cloud -print

ConsecutivePrimes[a_, b_] :=
  Block[{n},
    For[n = 0, PrimeQ[n*n + a*n + b], n++];
      n]

maxPrimes = 0;
maxProd = 0;

For[a = -999, a < 1000, a++,
  For[b = -999, b < 1000, b++,
    res = ConsecutivePrimes[a, b];
    If[res > maxPrimes,
      maxPrimes = res;
      maxProd = a * b]]]

maxProd
