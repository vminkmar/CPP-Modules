#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

int main() {
	for(int i = 0; i < 15; i++){
	Base *A = generate();
	identify(A);
	identify(*A);
	delete A;
	}

}
