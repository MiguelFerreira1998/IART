#include "parser.h"

LevelParser::LevelParser(char* level) {
  char c;

  std::stringstream ss;
  ss << "levels/level" << level << ".txt";
  std::string fileName = ss.str();

  std::ifstream levelFile;
  levelFile.open(fileName.c_str());

  if (levelFile.is_open())
  {
    while (!levelFile.eof())
    {
      levelFile >> c;
      std::cout << c << std::endl;
    }

    levelFile.close();
  }
  else std::cout << "Unable to open file. Exiting...\n";
}
