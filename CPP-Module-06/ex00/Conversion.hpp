#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <string>
#include <iostream>

class Conversion
{
	public:
	Conversion(std::string name);
	Conversion( const Conversion & obj );
	Conversion & operator=( const Conversion & obj );
	~Conversion();
	protected:
	private:
	Conversion();
	std::string	_name;
};

#endif
