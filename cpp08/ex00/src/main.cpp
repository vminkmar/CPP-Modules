#include "easyfind.hpp"

int main(){
	std::list<int> List;
	std::list<int> List1;

	for(int i = 0; i < 10; i++){
		List.push_back(i);
		List1.push_back(i * 2);
	}

	easyfind(List, 3);
	easyfind(List1, 3);

}