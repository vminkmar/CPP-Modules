#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){
  
}

Base *generate(void) {
  Base *p;
  int i = rand() % 3;
  if (i == 0)
    p = new A();
  else if (i == 1)
    p = new B();
  else if (i == 2)
    p = new C();
  else
    p = NULL;
  return p;
}

void identify(Base *p) {
	if(dynamic_cast<A*>(p) != NULL)
		std::cout << "Type is A" << std::endl;
	else if(dynamic_cast<B*>(p) != NULL)
		std::cout << "Type is B" << std::endl;
	else if(dynamic_cast<C*>(p) != NULL)
		std::cout << "Type is C" << std::endl;
}

void identify(Base &p) {
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference is from type A " << std::endl;
		return;
	}
	catch(std::exception &ex){
	  ex.what(); 
		std::cout << "The type is not A" << std::endl;
	}
		try{
		(void)dynamic_cast<B&>(p);
		std::cout << "Reference is from type B " << std::endl;
		return;
	}
	catch(std::exception &ex){
	  ex.what(); 
		std::cout << "The type is not B" << std::endl;
	}
		try{
		(void)dynamic_cast<C&>(p);
		std::cout << "Reference is from type C " << std::endl;
		return;
	}
	catch(std::exception &ex){
	  ex.what(); 
		std::cout << "The type is not C" << std::endl;
	}
}
