#include <iostream>
#include <string>

#include "funcs.h"

//Task A
std::string printRange(int left, int right){ //print left until right<left
  if (left <= right){
    return std::to_string(left) + " " + printRange(left+1, right);
  }
  else {
    return "";
  }
}

//Task B
int sumRange(int left, int right){ //add left until right<left
  if (left <= right){
    return left + sumRange(left+1, right);
  }
  else {
    return 0;
  }
}

//Task C
int sumArray(int *arr, int size){ //add elements in arr for size times
  if(size > 0){
    return *arr + sumArray(arr+1, size-1);
  }
  else {
    return 0;
  }
}

//Task D
bool isAlphanumeric(std::string s){ //substring each letter out until all letters are substringed out or one character isn't alphanumerical
  if (s == ""){
    return true;
  }
  if (isalnum(s[0])){
    return isAlphanumeric(s.substr(1));
  }
  else {
    return false;
  }
}

//Task E
bool nestedParens(std::string s){ //delete a ) upon seeing a ( and return false when neither could be found but there are still remaining characters
  if (s == ""){
    return true;
  }
  else if (s[0] != '('){
    return false;
  }
  else if (s.find("(") == std::string::npos || s.find(")") == std::string::npos || s.find("(") > s.find(")")){
    return false;
  }
  else {
    s.erase(0,1);
    return nestedParens(s.erase(s.find(")"), 1)); 
  }
  
}

std::string printArray (int* arr, int size){
  std::string result = "";
  for (int i=0; i<size; i++){
    result += std::to_string(*(arr+i)) + " ";
  }
  return result;
}


