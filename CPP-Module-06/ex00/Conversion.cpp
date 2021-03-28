#include "Conversion.hpp"

Conversion::Conversion()
{
}

Conversion::Conversion(std::string number) : _number(number)
{
	//arreglar el 000000000
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

	std::istringstream ( this->_number ) >> num;

	if (num < -128 || num > 127)
		std::cout << "Impossible";
	else
	{
		if ((num > 31 && num < 127) || this->_number.size() == 1)
		{
			if (this->_number.size() == 1 && this->_number[0] >= '0' && this->_number[0] <= '9')
				std::cout << "Non displayable";
			else if (this->_number.size() ==  1 && std::isprint(this->_number[0]))
				std::cout << "'" << this->_number[0] << "'";
			else
				std::cout << "'" << static_cast<char>(num) << "'";
		}
		else if (num == 0 && _number.size() > 1)
			std::cout << "Impossible";
		else
			std::cout << "Non displayable";
	}
	std::cout << std::endl;
}

void	Conversion::convertToInt() const
{
	int	num(0);

	std::cout << "int: ";
	if (!std::strncmp(this->_number.c_str(), "inf", 3) \
		|| !std::strncmp(this->_number.c_str(), "+inf", 4) \
		|| !std::strncmp(this->_number.c_str(), "nan", 3))
		std::cout << "Impossible";
	else if (this->_number.size() == 1 && !(this->_number[0] >= '0' && this->_number[0] <= '9'))
		num = static_cast<int>(this->_number[0]);
	else if (this->_number.size() == 1 && (num > -129 && num < 128))
		num = static_cast<int>(this->_number[0]);
	else
		std::istringstream ( this->_number ) >> num;
	//	num = std::atoi(static_cast<const char*>(this->_number.c_str()));
	std::cout << num;
	std::cout << std::endl;
}

void	Conversion::convertToFloat() const
{
	std::cout << "float: ";
	if (this->_number == "nan")
		std::cout << "nanf";
	std::cout << std::endl;
}

void	Conversion::convertToDouble() const
{
	std::cout << "double: ";
	if (this->_number == "nan")
		std::cout << "nan";
	std::cout << std::endl;
}
