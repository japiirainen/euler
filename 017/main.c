#include <stdio.h>

int main(void) {
  unsigned z_t[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
  unsigned t_t[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
  unsigned ts[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
  unsigned hundred = 7;
  unsigned and = 3;
  unsigned thousand = 8;

  unsigned i, sum = 0;

  for (i = 1; i < 10; i++)
    sum += z_t[i];

  for (i = 0; i < 10; i++)
    sum += t_t[i];

  for (i = 20; i < 100; i++)
    sum += ts[i / 10] + z_t[i % 10];

  for (i = 1; i < 10; i++) {
    sum += z_t[i] + hundred;

    unsigned j;

    for (j = 1; j < 10; j++)
      sum += z_t[i] + hundred + and+z_t[j];

    for (j = 0; j < 10; j++)
      sum += z_t[i] + hundred + and+t_t[j];

    for (j = 20; j < 100; j++)
      sum += z_t[i] + hundred + and+ts[j / 10] + z_t[j % 10];
  }

  sum += z_t[1] + thousand;

  printf("%u\n", sum);

  return 0;
}
