#include <iostream>
#include <cstdlib>

#include "funcs.h"

int randten();

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
  for (int i=0; i<3; i++){
    size = rand()%10;
    int *arr = new int[size];
    for (int j=0; j<size; j++){
      arr[j] = randten();
    }
    std::cout << "In the array: " << printArray(arr, size) << std::endl;
    std::cout << "\tThe sum is : " << sumArray(arr, size) << std::endl;
    delete[] arr;
  }

}

int randten(){
  if (rand()%2 == 0){
    return rand()%10;
  }
  else {
    return (rand()%10) * -1;
  }
}

