#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

string read_name() {
  string result;
  for (;;) {
    char c = cin.get();
    if (!cin)
      break;

    if (c == '"')
      continue;

    if (c == ',')
      break;

    result += c;
  }
  return result;
}

int main(void) {
  set<string> names;

  for (;;) {
    auto name = read_name();
    if (name.empty())
      break;
    names.insert(name);
  }

  map<string, unsigned int> sorted;
  unsigned int pos = 1;
  for (auto name : names)
    sorted[name] = pos++;

  unsigned int sum = 0;
  for (auto name : sorted) {
    unsigned int s = 0;
    for (auto c : name.first)
      s += c - 'A' + 1;
    sum += s * name.second;
  }

  cout << sum << endl;

  return 0;
}
