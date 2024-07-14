#include <stdio.h>

unsigned month_days(unsigned year, unsigned month) {
  switch (month) {
  case 2:
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      // leap year
      return 29;
    else
      return 28;
  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
  default:
    return 31;
  }
}

int main(void) {
  unsigned year, month, wday = 0, sun = 0;

  for (year = 1901; year <= 2000; year++)
    for (month = 1; month <= 12; month++) {
      if (wday == 5)
        sun++;
      wday = (wday + month_days(year, month)) % 7;
    }

  printf("%u\n", sun);

  return 0;
}
