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
	std::istringstream ( this->_number ) >> num;
	/*if (!std::strncmp(this->_number.c_str(), "inf", 3) || !std::strncmp(this->_number.c_str(), "+inf", 4))
	{
		std::cout << "inf" << std::endl;
		return ;
	}
	else if (!std::strncmp(this->_number.c_str(), "-inf", 4))
	{
		std::cout << "-inf" << std::endl;
		return ;
	}
	else if ((this->_number.size() > 1 && num == 0) \
	*/
	if ((this->_number.size() > 1 && num == 0) \
			|| !std::strncmp(this->_number.c_str(), "nan", 3))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	else if (this->_number.size() == 1 && !(this->_number[0] >= '0' && this->_number[0] <= '9'))
		num = static_cast<int>(this->_number[0]);
	std::cout << num << std::endl;
}

void	Conversion::convertToFloat() const
{
	std::cout << "float: ";
	float     num(0.0f);

	std::istringstream ( this->_number ) >> num;
	if (!std::strncmp(this->_number.c_str(), "inf", 3) || !std::strncmp(this->_number.c_str(), "+inf", 4))
	{
		std::cout << "inff" << std::endl;
		return ;
	}
	else if (!std::strncmp(this->_number.c_str(), "-inf", 4))
	{
		std::cout << "-inff" << std::endl;
		return ;
	}
	else if (!std::strncmp(this->_number.c_str(), "nan", 3))
	{
		std::cout << "nanf" << std::endl;
		return ;
	}
	else if (this->_number.size() > 1 && num == 0)
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	else if (this->_number.size() == 1 && !(this->_number[0] >= '0' && this->_number[0] <= '9'))
		num = static_cast<float>(this->_number[0]);
	std::cout << std::setprecision(1) << std::fixed << num << "f" << std::endl;
}

void	Conversion::convertToDouble() const
{
	std::cout << "double: ";
	double		num(0.0);

	std::istringstream ( this->_number ) >> num;
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
	else if (!std::strncmp(this->_number.c_str(), "nan", 3))
	{
		std::cout << "nan" << std::endl;
		return ;
	}
	else if (this->_number.size() > 1 && num == 0)
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	else if (this->_number.size() == 1 && !(this->_number[0] >= '0' && this->_number[0] <= '9'))
		num = static_cast<double>(this->_number[0]);
	std::cout << std::setprecision(1) << std::fixed << num << std::endl;
}
