#ifndef ITER_HPP
#define ITER_HPP
#include <string>
#include <cctype>
#include <iostream>

template <typename T>
void iter(T *address, size_t length, void (*foo)(T &)){
  if(address == NULL || foo == NULL)
    return ;
  for(size_t i = 0; i < length; i++)
    foo(address[i]);
}


#endif