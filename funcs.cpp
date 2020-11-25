#include <iostream>

#include "funcs.h"

//Task A
std::string printRange(int left, int right){
  if (left <= right){
    return std::to_string(left) + " " + printRange(left+1, right);
  }
  else {
    return "";
  }
}

//Task B
int sumRange(int left, int right){
  if (left <= right){
    return left + sumRange(left+1, right);
  }
  else {
    return 0;
  }
}

//Task C
int sumArray(int *arr, int size){
  if(size > 0){
    return *arr + sumArray(arr+1, size-1);
  }
  else {
    return 0;
  }
}

std::string printArray (int* arr, int size){
  std::string result = "";
  for (int i=0; i<size; i++){
    result += std::to_string(*(arr+i)) + " ";
  }
  return result;
}


