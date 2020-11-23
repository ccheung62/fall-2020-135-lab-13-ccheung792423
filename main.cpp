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

}

int randten(){
  if (rand()%2 == 0){
    return rand()%10;
  }
  else {
    return (rand()%10) * -1;
  }
}
