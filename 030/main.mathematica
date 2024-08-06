#!/usr/bin/env wolframscript -cloud -print

Fpds[n_] := Total[Map[Function[y, y^5], IntegerDigits[n]]] == n

Total[Select[Range[2, 999999], Fpds]]
