#include <iostream>

#include "cbufpp/version.hh"


int main(int argv, char** argc) {
  std::cout << cbufpp::Version::kName << std::endl;

  return 0;
}
