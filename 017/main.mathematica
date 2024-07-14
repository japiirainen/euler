#!/usr/bin/env wolframscript -cloud -print

ones = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
tens = {"", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

Trans[n_] := Piecewise[{
  {"zero", n == 0},
  {ones[[n]], 1 <= n < 20},
  {tens[[Floor[n/10]]] <> If[Mod[n, 10] != 0, ones[[Mod[n, 10]]] , ""], 20 <= n < 100},
  {ones[[Floor[n/100]]] <> "hundred" <> If[Mod[n, 100] != 0, "and" <> Trans[Mod[n, 100]], ""], 100 <= n < 1000},
  {ones[[Floor[n/1000]]] <> "thousand" <> If[Mod[n, 1000] != 0, Trans[Mod[n, 1000]], ""], 1000 <= n < 1000000}}]

Sum[StringLength[Trans[n]], {n, 1000}]
