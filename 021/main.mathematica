#!/usr/bin/env wolframscript -cloud -print

DivSum[n_] := DivisorSigma[1, n] - n

AmicableQ[n_] := DivSum[n] != n && DivSum[DivSum[n]] == n

Total[Select[Range[9999], AmicableQ]]
