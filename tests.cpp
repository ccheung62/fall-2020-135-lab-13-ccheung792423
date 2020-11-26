#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "funcs.h"

//Task A
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

//Task B
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

int arr[5];
int*a = arr;

//Task C
TEST_CASE("Task C: Empty array"){
  CHECK(sumArray(arr,0) == 0);
}

TEST_CASE("Task C: Regular Cases"){
  arr[0]= -4; arr[1]= 7; arr[2]= -6; arr[3]= -4; arr[4]= -3;
  CHECK(sumArray(a,5) == -10);
  arr[0]= -8; arr[1]= 3; arr[2]= 0; arr[3]= 9; arr[4]= 8;
  CHECK(sumArray(a,5) == 12);
  arr[0]= -6; arr[1]= -3; arr[2]= -8; arr[3]= -2; arr[4]= -5;
  CHECK(sumArray(a,5) == -24);
}

//Task D

