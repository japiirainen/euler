#!/usr/bin/env wolframscript -cloud -print

Length[Union[Flatten[Table[a^b, {a, 2, 100}, {b, 2, 100}]]]]
