#include <iostream>
#include <vector>

#define ui unsigned int

ui cycle_len(ui x) {
  if (x == 0)
    return 0;

  std::vector<ui> last_pos(x, 0);

  ui pos = 1;
  ui divident = 1;

  for (;;) {
    ui rem = divident % x;
    // no cycle
    if (rem == 0)
      return 0;
    // found cycle
    if (last_pos[rem] != 0)
      return pos - last_pos[rem];

    last_pos[rem] = pos;

    pos++;
    divident = rem * 10;
  }

  return 0;
}

int main(void) {
  ui max_denom, longest_cycle = 0;

  for (ui denom = 2; denom < 1000; denom++) {
    auto len = cycle_len(denom);
    if (len > longest_cycle) {
      max_denom = denom;
      longest_cycle = len;
    }
  }

  std::cout << max_denom << std::endl;

  return 0;
}
