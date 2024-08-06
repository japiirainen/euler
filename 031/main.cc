#include <iostream>
#include <vector>

int main(void) {
  std::vector<int> ways;
  ways.reserve(200);

  for (int i = 0; i <= 200; i++)
    ways.push_back(0);

  ways[0] = 1;

  std::vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200};

  for (auto coin : coins)
    for (unsigned long i = 0; i < (ways.size() - coin); i++)
      ways[i + coin] += ways[i];

  std::cout << ways[200] << std::endl;

  return 0;
}
