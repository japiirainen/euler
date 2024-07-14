#!/usr/bin/env wolframscript -cloud -print

Length[
  Select[DayRange[DateObject[{1901, 1, 1}, "Day"],  DateObject[{2000, 12, 1}, "Day"], Sunday],
    Function[d, DateValue[d, "Day"] == 1]]]
