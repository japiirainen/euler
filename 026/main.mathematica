#!/usr/bin/env wolframscript -cloud -print

CycleLength[x_] := Length[Last[First[RealDigits[x]]]]

d = 1;
For[i = 1, i < 1000, i++,
  If[CycleLength[1/i] > CycleLength[1/d], d = i]]
d
