#include "Serializer.hpp"


int main(){

    Data animal;

    animal.type = "cat";
    animal.age = 1;
    animal.address = NULL;
   
    std::cout << "address: " << &animal<< std::endl;
    std::cout << "type: " << animal.type << std::endl; 
    std::cout << "age: " << animal.age << std::endl;
    std::cout << "test: " << animal.address << std::endl;
    std::cout << std::endl;

    Serializer serialize;

    uintptr_t test = serialize.serialize(&animal);
    std::cout << "serialized: " << test << std::endl;
    Data *test2 = serialize.deserialize(test);
    std::cout << "deserialized: " <<test2 << std::endl;
    if(test2 == &animal)
        std::cout << "success" << std::endl;
    else
        std::cout << "fail" << std::endl;
    return (0);
}
