#include <iostream>

const unsigned int WIDTH = 1001;

int main(void) {
  unsigned long long sum = 0;

  // first 'level'
  sum += 1;

  for (unsigned int i = 3; i <= WIDTH; i += 2) {
    sum += (4 * (i * i)) - (6 * (i - 1));
  }

  std::cout << sum << std::endl;

  return 0;
}
