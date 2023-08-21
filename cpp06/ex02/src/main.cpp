#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base *generate(void) {
  Base *p;
  int i = rand() % 3;
  if (i == 1)
    p = new A();
  else if (i == 2)
    p = new B();
  else if (i == 3)
    p = new C();
  else
    p = NULL;
  return p;
}

void identify(Base *p) {}

void identify(Base &p) {}

int main() {}
