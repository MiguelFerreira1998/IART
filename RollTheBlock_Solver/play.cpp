#include <iostream>
#include <stdlib.h>

#include "parser.h"

int main(int argc, char *argv[]) {

  if(argc != 2) {
    std::cout << "Please enter the level correctly. Example: './play 4'\nExiting...\n";
    return -1;
  }

  LevelParser parser(argv[1]);

  return 0;
}
