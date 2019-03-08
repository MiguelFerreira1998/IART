#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

#include "element.h"

class LevelParser {
  std::vector< std::vector<Element> > level;

public:
  LevelParser(char*);
  std::vector< std::vector<Element> > getLevel();
};
