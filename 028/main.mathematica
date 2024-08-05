#!/usr/bin/env wolframscript -cloud -print

w = 1001;

1 + Sum[Block[{n = 2k + 1}, 4*n^2 - 6 * (n - 1)], {k, (w - 1) / 2}]
