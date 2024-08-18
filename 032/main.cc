#include <algorithm>
#include <iostream>
#include <string>

bool pred(int n) {
  for (int k = 1; k <= sqrt(n); k++)
    if (n % k == 0) {
      std::string s =
          std::to_string(n) + std::to_string(k) + std::to_string(n / k);
      std::sort(s.begin(), s.end());
      if (s == "123456789")
        return true;
    }

  return false;
}

int main(void) {
  int sum = 0;

  for (int i = 1; i < 10e4; i++)
    if (pred(i))
      sum += i;

  std::cout << sum << std::endl;

  return 0;
}
