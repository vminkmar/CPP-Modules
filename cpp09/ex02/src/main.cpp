#include "PmergeMe.hpp"

int main(int argc, char **argv) {
  if (checkInput(argc) == false)
    return (1);
  PmergeMe Merge;
  while (Merge.m_counter < 2) {
    try {
      Merge.argvToIntandVector(argv);
    }catch(PmergeMe::justOneNumberException &ex){
      std::cerr << "Caught exception: " << ex.what() << std::endl;
      return (1);
		}
		 catch (PmergeMe::wrongInputException &ex1) {
      std::cerr << "Caught exception: " << ex1.what() << std::endl;
      return (1);
    } catch (PmergeMe::negativeIntException &ex2) {
      std::cerr << "Caught exception: " << ex2.what() << std::endl;
      return (1);
    } catch (PmergeMe::intTooBigException &ex3) {
      std::cerr << "Caught exception: " << ex3.what() << std::endl;
      return (1);
    }
    if (Merge.m_counter == 0)
      Merge.getVector();
    else
      Merge.getDeque();
    Merge.printResult();
    Merge.m_counter++;
  }
}
