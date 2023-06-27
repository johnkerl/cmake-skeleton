// ================================================================
// Copyright (c) 2023 John Kerl.
// kerl.john.r@gmail.com
// Please see LICENSE.txt.
// ================================================================

#include <iostream>
#include <string>
#include <vector>

#include "skeleton/base/functions.h"

int main(int argc, char **argv) {
  std::cout << "Hello, world!\n";
  int a = 3;
  int b = 4;
  int c = skeleton::base::add(a, b);
  std::cout << a << " + " << b << " = " << c << "\n";
  return 0;
}
