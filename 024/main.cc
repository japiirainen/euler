#include <iostream>

using namespace std;

int main(void) {
  unsigned int n = 10e5;

  string cur = "0123456789";

  while (--n)
    next_permutation(cur.begin(), cur.end());

  cout << cur << endl;

  return 0;
}
