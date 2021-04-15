#include <iostream>
#include "whatever.hpp"

#define COLOR_ONE	"\033[35m"
#define COLOR_TWO	"\033[33m"
#define COLOR_NO	"\033[0m"

class Test
{
	public:
		Test( int n ) : _number( n ) {}
		bool operator>=( Test const & rhs ) const { return (this->_number >= rhs._number); }
		bool operator<=( Test const & rhs ) const { return (this->_number <= rhs._number); }
		int getNumber() const {return this->_number;}
	private:
		int _number;
};
std::ostream & operator<<(std::ostream & o, Test const & test) { return o << test.getNumber(); }

int		main(void)
{
	{
		std::cout << COLOR_TWO << "------------int-----------------" << COLOR_NO << std::endl;
		int	a = 2;
		int	b = 3;

		std::cout <<COLOR_ONE << "a = " << a << ", b = " << b << COLOR_NO << std::endl;
		::swap( a, b );
		std::cout << "swap: a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::cout << COLOR_TWO << "------------string---------------" << COLOR_NO << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << COLOR_ONE << "c = " << c << ", d = " << d << COLOR_NO << std::endl;
		::swap(c, d);
		std::cout << "swap: c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------float----------------" << COLOR_NO << std::endl;
		float	a = 42.40;
		float	b = 42.50;

		std::cout << COLOR_ONE << "a = " << a << ", b = " << b << COLOR_NO << std::endl;
		::swap( a, b );
		std::cout << "swap: a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}
	{
		std::cout << COLOR_TWO << "------------class----------------" << COLOR_NO << std::endl;
		Test	a(42);
		Test	b(30);

		std::cout << COLOR_ONE << "a = " << a << ", b = " << b << COLOR_NO << std::endl;
		::swap( a, b );
		std::cout << "swap: a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	}

	return (0);
}
