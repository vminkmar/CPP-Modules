#include "whatever.hpp"

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::cout << std::endl;
std::string str = "hello";
std::string str1 = "hello1";
::swap( str, str1 );
std::cout << "str = " << str << ", str1 = " << str1 << std::endl;
std::cout << "min( a, b ) = " << ::min( str, str1 ) << std::endl;
std::cout << "max( a, b ) = " << ::max( str, str1 ) << std::endl;
return 0;
}