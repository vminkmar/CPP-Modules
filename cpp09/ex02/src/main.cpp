#include "PmergeMe.hpp"

int main(int argc, char **argv) {
  if (checkInput(argc) == false)
    return (1);
  PmergeMe Merge;
	for(int i = 0; i < 2; i++){
 	 try {
 	   Merge.argvToIntandVector(argv, i);
 	 } catch (PmergeMe::wrongInputException &ex1) {
 	   std::cerr << "Caught exception: " << ex1.what() << std::endl;
 	   return (1);
 	 } catch (PmergeMe::negativeIntException &ex2) {
 	   std::cerr << "Caught exception: " << ex2.what() << std::endl;
 	   return (1);
 	 } catch (PmergeMe::intTooBigException &ex3) {
 	   std::cerr << "Caught exception: " << ex3.what() << std::endl;
 	   return (1);
 	 }
 	 Merge.getPairsAndSort();
 	 // Merge.print();
 	 Merge.printResult();
	}
}