#!/usr/bin/env wolframscript -cloud -print

Total[Select[Range[999], Function[x, Mod[x, 3] == 0 || Mod[x, 5] == 0]]]
