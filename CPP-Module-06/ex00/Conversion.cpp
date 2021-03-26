#include "Conversion.hpp"

Conversion::Conversion()
{
}

Conversion::Conversion(std::string number) : _number(number)
{
}

Conversion::Conversion( const Conversion & obj )
{
	*this = obj;
}

Conversion & Conversion::operator=( const Conversion & obj )
{
	(void)obj; // Esto toca arreglarlo.
	return ( *this );
}

Conversion::~Conversion()
{
}


void	Conversion::convertToChar() const
{
	std::cout << "char: ";
	int num;

	try
	{
		num = std::stoi(this->_number);
	}
	catch (std::exception & e)
	{
		if (this->_number.size() > 1)
			num = -129;
		else
			num = static_cast<int>(this->_number[0]);
	}
	if (!(num > -129 && num < 128))
		std::cout << "Impossible";
	else if (std::isprint(static_cast<char>(num)))
		std::cout << "'" << static_cast<char>(num) << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	Conversion::convertToInt() const
{
	std::cout << "int: ";
	if (this->_number == "nan")
		std::cout << "Impossible" << std::endl;
}

void	Conversion::convertToFloat() const
{
	std::cout << "float: ";
	if (this->_number == "nan")
		std::cout << "nanf" << std::endl;
}

void	Conversion::convertToDouble() const
{
	std::cout << "double: ";
	if (this->_number == "nan")
		std::cout << "nan" << std::endl;
}
