#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "funcs.h"

TEST_CASE ("Task A: Regular Cases"){
  CHECK(printRange(1,9) == "1 2 3 4 5 6 7 8 9 ");
  CHECK(printRange(-10,-1) == "-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 ");
  CHECK(printRange(8,13) == "8 9 10 11 12 13 ");
}

TEST_CASE ("Task A: left is greater than right"){
  CHECK(printRange(3,-9) == "");
  CHECK(printRange(-1,-10) == "");
  CHECK(printRange(8,3) == "");
}

TEST_CASE ("Task A: left = right"){
  CHECK(printRange(-8,-8) == "-8 ");
  CHECK(printRange(3,3) == "3 ");
  CHECK(printRange(-23,-23) == "-23 ");
}

TEST_CASE ("Task B: Regular Cases"){
  CHECK(sumRange(1,3) == 6);
  CHECK(sumRange(-2,10) == 52);
  CHECK(sumRange(-10,10) == 0);
}

TEST_CASE ("Task B: left is greater than right"){
  CHECK(sumRange(-1,-10) == 0);
  CHECK(sumRange(3,-9) == 0);
  CHECK(sumRange(8,3) == 0);
}

TEST_CASE("Task B: left = right"){
  CHECK(sumRange (2,2) == 2);
  CHECK(sumRange(7,7) == 7);
  CHECK(sumRange(-1,-1) == -1);
}
