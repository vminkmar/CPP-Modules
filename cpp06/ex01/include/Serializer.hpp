#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <string>
#include <stdint.h>

typedef struct Data {
  std::string type;
  int age;
  Data *address;
} Data;

class Serializer {
private:
public:
  Serializer();
  ~Serializer();
  Serializer(const Serializer &copy);
  Serializer &operator=(const Serializer &obj);

  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);
};

#endif