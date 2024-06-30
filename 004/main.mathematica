#!/usr/bin/env wolframscript -cloud -print

Max[Select[
  Flatten[Table[i * j, {i, 100, 999}, {j, 100, 999}]],
  Function[x, IntegerDigits[x] == Reverse[IntegerDigits[x]]]]]
