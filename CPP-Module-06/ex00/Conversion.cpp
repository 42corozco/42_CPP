#include "Conversion.hpp"

Conversion::Conversion()
{
}
Conversion::Conversion(std::string name) : _name(name)
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
