#!/usr/bin/env wolframscript -cloud -print

Coins = {1, 2, 5, 10, 20, 50, 100, 200};

Ways[coinIndex_, total_] := Ways[coinIndex, total] =
  If[coinIndex == 0, Boole[total == 0],
    Sum[Ways[coinIndex - 1, total - i * Coins[[coinIndex]]], {i, 0, Floor[total / Coins[[coinIndex]]]}]]

Ways[Length[Coins], 200]
