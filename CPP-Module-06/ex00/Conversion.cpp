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

	std::istringstream ( this->_number ) >> num;
	if (this->_number.size() > 1)
		num = -129;
	else
		num = static_cast<int>(this->_number[0]);
	if (!std::strncmp(this->_number.c_str(), "nan", 3) \
		|| !(num > -129 && num < 128))
		std::cout << "Impossible";
	else if (std::isprint(static_cast<char>(num)))
		std::cout << "'" << static_cast<char>(num) << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	Conversion::convertToInt() const
{
	int	num(0);

	std::cout << "int: ";
	if (!std::strncmp(this->_number.c_str(), "inf", 3) || !std::strncmp(this->_number.c_str(), "+inf", 4))
	{
		std::cout << "inf" << std::endl;
		return ;
	}
	else if (!std::strncmp(this->_number.c_str(), "-inf", 4))
	{
		std::cout << "-inf" << std::endl;
		return ;
	}
	try
	{
		if (this->_number.size() == 1 && !(this->_number[0] >= '0' && this->_number[0] <= '9'))
			num = static_cast<int>(this->_number[0]);
		else
			std::istringstream ( this->_number ) >> num;
		//	num = std::atoi(static_cast<const char*>(this->_number.c_str()));
		std::cout << num;
	}
	catch (std::exception & e)
	{
		std::cout << "Impossible";
	}
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
