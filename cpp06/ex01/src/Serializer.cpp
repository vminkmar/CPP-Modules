#include "Serializer.hpp"

Serializer::Serializer() {
  std::cout << "Serializer Constructor called" << std::endl;
}

Serializer::~Serializer()
{
  std::cout << "Serializer Destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
  std::cout << "Serializer Copy Constructor called" << std::endl;
  *this = copy;
}

Serializer &Serializer::operator=(const Serializer &obj)
{
  if (this == &obj)
    return *this;
  return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
  return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data *>(raw);
}
