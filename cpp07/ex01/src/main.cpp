#include "iter.hpp"

void print(int &number){
  std::cout << number << std::endl;
}


int main( void ) {
  int Array[] = {1,2,3,4,5};
  size_t sizeArray = sizeof(Array)/sizeof(int);
  ::iter(Array, sizeArray, print);

}