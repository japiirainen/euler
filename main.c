#include <stdio.h>

void usage() {
  printf("Each challenge has it's own *subfolder*.\n");
  printf(
      "Some challenges have solutions in multiple languages, but one in `c`\n"
      "should always exist!");
  printf("To run the `c` version of e.g. `001`, `cd 001 && make run`\n");
}

int main() {
  printf("Welcome to `japiirainen/euler`!\n");
  usage();
}
