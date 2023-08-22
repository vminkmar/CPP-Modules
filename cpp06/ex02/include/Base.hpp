#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <stdint.h>
#include <string>
#include <cstdlib>


class Base {
private:
public:
  virtual ~Base();
};
  void identify(Base *p);
  void identify(Base &p);
  Base *generate(void);
#endif