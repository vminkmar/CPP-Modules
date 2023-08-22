#include "Array.hpp"

int main() {
  Array1<int, 0> newArray;
  std::cout << newArray.size() << std::endl;

  Array1<int, 5> newArray2;
  std::cout << newArray2.size() << std::endl;

  Array1<std::string, 100> newArray3;
  std::cout << newArray3.size() << std::endl;

  try {
    std::cout << newArray[1] << std::endl;
  } catch (Array1<int, 0>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  Array<int> newArray4(0);
  std::cout << newArray4.size() << std::endl;

  Array<int> newArray5(5);
  std::cout << newArray5.size() << std::endl;

  Array<std::string> newArray6(100);
  std::cout << newArray6.size() << std::endl;

  try {
    std::cout << newArray4[1] << std::endl;
  } catch (Array<int>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
}
