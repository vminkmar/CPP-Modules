#include "Array.hpp"

int main() {
  Array1<int, 0> newArray;
  std::cout << "Array: "<< newArray.size() << std::endl;
  try {
    std::cout << newArray[1] << std::endl;
  } catch (Array1<int, 0>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }

  std::cout << std::endl;
  std::cout << std::endl;

  Array<int> newArray2(0);
  std::cout << "Array2: "<< newArray2.size() << std::endl;
	std::cout << std::endl;

  Array<int> newArray3(5);
  std::cout << "Array3: "<< newArray3.size() << std::endl;
	std::cout << std::endl;

  Array<std::string> newArray4(100);
  std::cout << "Array4: "<< newArray4.size() << std::endl;
	std::cout << std::endl;

  try {
    std::cout << newArray3[1] << std::endl;
  } catch (Array<int>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
	std::cout << std::endl;

  try {
    std::cout << newArray2[1] << std::endl;
  } catch (Array<int>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
}
