#include <iostream>

#include "bokit/types/view.hpp"

int main(int argc, char** argv) {

  std::cout << "Basic example...\n";


  uint16_t* x = new uint16_t[10]();

  bokit::types::view_c<uint16_t>(*x, 10);

  delete[] x;

  return 0;
}
