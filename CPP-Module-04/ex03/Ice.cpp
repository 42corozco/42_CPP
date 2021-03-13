#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( Ice const & obj )
{
	*this = obj;
}

Ice&	Ice::operator=( Ice const & rhs)
{
	this->setXp(rhs.getXP());
	this->setType(rhs.getType());
	return ( *this );
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return ( new Ice(*this) );
}

void Ice::use(ICharacter& target)
{
	this->setXp(this->getXP() + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() \
		<< " *" << std::endl;
}
