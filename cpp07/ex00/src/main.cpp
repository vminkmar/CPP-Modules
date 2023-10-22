#include "whatever.hpp"

int main( void ) {
int a = 2;
int b = 3;

std::cout << "a = " << a << std::endl<< "b = " << b << std::endl;
::swap( a, b );
std::cout << std::endl;
std::cout << "after swap" << std::endl;
std::cout << std::endl;
std::cout << "a = " << a << std::endl<< "b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::cout << std::endl;

std::string str = "hello";
std::string str1 = "hello1";

std::cout << "str = " << str << std::endl << "str1 = " << str1 << std::endl;
::swap( str, str1 );
std::cout << std::endl;
std::cout << "after swap" << std::endl;
std::cout << std::endl;
std::cout << "str = " << str << std::endl << "str1 = " << str1 << std::endl;
std::cout << "min( a, b ) = " << ::min( str, str1 ) << std::endl;
std::cout << "max( a, b ) = " << ::max( str, str1 ) << std::endl;
return 0;
}