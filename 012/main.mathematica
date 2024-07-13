#!/usr/bin/env wolframscript -cloud -print

TriangleNumber[n_] := (n * (n + 1)) / 2

i = 1;

While[DivisorSigma[0, TriangleNumber[i]] <= 500, i++]

TriangleNumber[i]
