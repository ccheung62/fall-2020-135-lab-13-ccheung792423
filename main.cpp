#include <iostream>
#include <string>
#include <cstdlib>

#include "funcs.h"

int randten();
void printE(std::string str);

int main (){
  srand(time(0));
  //Task A
  int first = randten();
  int sec = randten();
  std::cout << "Task A" << std::endl;
  for (int i=0; i<5; i++){
    std::cout << "Printing from " << first << " to " << sec << "\n\t" << printRange(first,sec) << std::endl;
    first = randten();
    sec = randten();
  }
  std::cout << "-----------------------------------------------" << std::endl;

  //Task B
  std::cout << "Task B" << std::endl;
  for (int i=0; i<5; i++){
    std::cout << "The sum of consecutive integers from " << first << " to " << sec << " is: " << sumRange(first,sec) << std::endl; 
    first = randten();
    sec = randten();
  }
  std::cout << "-----------------------------------------------" << std::endl;

  //Task C
  std::cout << "Task C" << std::endl;
  int size = 0;
  for (int i=0; i<5; i++){
    size = rand()%10;
    int *arr = new int[size];
    for (int j=0; j<size; j++){
      arr[j] = randten();
    }
    std::cout << "In the array: " << printArray(arr, size) << std::endl;
    std::cout << "\tThe sum is : " << sumArray(arr, size) << std::endl;
    delete[] arr;
  }
  std::cout << "-----------------------------------------------" << std::endl;

  //Task D
  std::cout << "Task D" << std::endl;
  std::string phrase = "";
  for (int i=0; i<5; i++){
    for (int i=0; i<rand()%10; i++){
      phrase += rand()%95 + 32;
    }
    std::cout << "For the string: " << phrase << "\n\t";
    if (isAlphanumeric(phrase)){
      std::cout << "is alphanumerical" << std::endl;
    }
    else {
      std::cout << "is not alphanumerical" << std::endl;
    }
    phrase = "";
  }
  std::cout << "-----------------------------------------------" << std::endl;

  //Task E
  std::cout << "Task E" << std::endl;
  std::string str = "((()))";
  printE(str);
  str = "()";
  printE(str);
  str = "";
  printE(str);
  str = "(((";
  printE(str);
  str = "(()";
  printE(str);
  str = ")(";
  printE(str);
  str = "a(b)c";
  printE(str);

}

int randten(){
  if (rand()%2 == 0){
    return rand()%10;
  }
  else {
    return (rand()%10) * -1;
  }
}

void printE(std::string str){
  std::cout << "\"" << str << "\"" << " is ";
  if (nestedParens(str)) { //true 
    std::cout << "a sequence of nested parentheses" << std::endl;
  }    
  else {
    std::cout << "not a sequence of nested parentheses" << std::endl;
  }
}

