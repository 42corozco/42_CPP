#include <iostream>

template < typename T > void print( const T& v ) { std::cout << v ; }

template < typename FIRST, typename... REST >
void print( const FIRST& first, const REST&... rest  ) { print(first) ; print( rest... ) ; }

int main()
{
    print( "Hola, ", " que tal?!", ' ', 42, '\n' ) ;
}
