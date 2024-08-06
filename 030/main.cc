#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

std::vector<int> integer_digits(int n) {
  std::vector<int> digits;
  int x = n;

  while (x) {
    digits.push_back(x % 10);
    x /= 10;
  }

  std::reverse(digits.begin(), digits.end());
  return digits;
}

int fdps(int n) {
  auto digits = integer_digits(n);
  std::transform(digits.begin(), digits.end(), digits.begin(),
                 [](int d) { return pow(d, 5); });
  return std::accumulate(digits.begin(), digits.end(), 0);
}

int main(void) {
  int sum = 0;

  for (int n = 2; n < 10e5; n++)
    if (n == fdps(n))
      sum += n;

  std::cout << sum << std::endl;

  return 0;
}
