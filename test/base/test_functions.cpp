#include <catch2/catch_test_macros.hpp>

#include "skeleton/base/functions.h"

#include <string.h>

// ----------------------------------------------------------------
TEST_CASE("skeleton::base::add") {
  int a = 3;
  int b = 4;
  int c = skeleton::base::add(a, b);

  CHECK(c == 7);
}
