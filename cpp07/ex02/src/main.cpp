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
  std::cout << "Array2 size: "<< newArray2.size() << std::endl;
	std::cout << std::endl;

  Array<int> newArray3(5);
  std::cout << "Array3 size: "<< newArray3.size() << std::endl;
	std::cout << std::endl;

	newArray3[2] = 5;
	std::cout << "Array3[2] value: "<< newArray3[2] << std::endl;
	std::cout << std::endl << std::endl;


	std::cout << "Testing Copy Constructor:" <<std::endl;
	Array<int>copyArray(newArray3);
	std::cout << "copyArray size: " << copyArray.size() << std::endl;
	copyArray[2] = 10;
	std::cout << "Array3[2] value: "<< newArray3[2] << std::endl;
	std::cout << "copyArray[2] value: "<< copyArray[2] << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Testing Assignment Operator:" <<std::endl ;
	Array<int>assignmentArray(3);
	assignmentArray = newArray3;
	std::cout << "assignmentArray size: " << assignmentArray.size() << std::endl;
	std::cout << "Array3[2] value: "<< newArray3[2] << std::endl;
	std::cout << "assigmentArray[2] value: "<< assignmentArray[2] << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


  try {
    std::cout << newArray3[1] << std::endl;
  } catch (Array<int>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
	std::cout << std::endl;

  try {
    std::cout << newArray2[0] << std::endl;
  } catch (Array<int>::IndexException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
}
