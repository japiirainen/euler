#include <stdio.h>

void usage() {
  printf("Each solution lives in it's own *subfolder*. To run e.g. `001`, `cd "
         "001 && make run`\n");
}

int main() {
  printf("Welcome to `japiirainen/euler`!\n");
  usage();
}
