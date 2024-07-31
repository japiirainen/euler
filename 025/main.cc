#include <iostream>
#include <vector>

using namespace std;

typedef vector<unsigned int> Digits;

const unsigned int MaxDigits = 1000;

Digits add(const Digits &a, const Digits &b) {
  Digits res = b;

  unsigned int carry = 0;

  for (unsigned int i = 0; i < res.size(); i++) {
    if (i < a.size())
      res[i] += a[i];
    res[i] += carry;
    if (res[i] >= 10) {
      carry = 1;
      res[i] -= 10;
    } else {
      carry = 0;
    }
  }
  if (carry != 0)
    res.push_back(carry);
  return res;
}

int main(void) {
  vector<unsigned int> cache = {0, 1};
  cache.reserve(MaxDigits);

  Digits a = {1};
  Digits b = {1};

  unsigned int fibIndex = 2;

  while (cache.size() <= MaxDigits) {
    fibIndex++;
    auto next = add(a, b);
    a = std::move(b);
    b = std::move(next);

    auto numDigits = b.size();
    auto largestKnown = cache.size() - 1;

    if (largestKnown < numDigits)
      cache.push_back(fibIndex);
  }

  cout << cache[1000] << endl;

  return 0;
}
