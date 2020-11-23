#include <iostream>

#include "funcs.h"

std::string printRange(int left, int right){
  if (left <= right){
    return std::to_string(left) + " " + printRange(left+1, right);
  }
  else {
    return "";
  }
}

int sumRange(int left, int right){
  if (left <= right){
    return left + sumRange(left+1, right);
  }
  else {
    return 0;
  }
}


