#!/usr/bin/env wolframscript -cloud -print

For[a = 1, a <= 1000, a++,
  For[b = a + 1, b <= 1000, b++,
    Block[{c = 1000 - a - b},
      If[a^2 + b^2 == c^2,
        Print[a*b*c]]]]]
