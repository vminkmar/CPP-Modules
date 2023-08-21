#include "Array.hpp"

int main(){
  Array <int, 0> newArray;
  std::cout << newArray.size() << std::endl;

  Array <int, 5> newArray2;
  std::cout << newArray2.size() << std::endl;

  Array <std::string, 100>newArray1;
  std::cout << newArray1.size() << std::endl;

  try{
  std::cout << newArray[1] << std::endl;
  }
  catch(Array<int, 0>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;}
}