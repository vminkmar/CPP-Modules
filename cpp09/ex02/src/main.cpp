#include "PmergeMe.hpp"

int main(int argc, char **argv) {
  if (checkInput(argc) == false)
    return (1);
	PmergeMe Merge;
	Merge.argvToIntandVector(argv);
	Merge.print();
}