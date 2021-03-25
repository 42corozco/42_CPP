#include "Peon.hpp"

Peon::Peon(void)
{
	this->_name = "Nani";
};

Peon::Peon( std::string name ) : Victim(name)
{
	std::cout << "Zog Zog." << std::endl;
};

Peon::Peon( Peon const & obj )
{
	*this = obj;
};

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
};

Peon&	Peon::operator=( Peon const & rhs )
{
	this->_name = rhs._name;
	return (*this);
};

void		Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" \
		<< std::endl;
};

std::ostream &	operator<<( std::ostream & o, Peon const & i )
{
	o << "I am " << i.getName() << " and I like otters!" << std::endl;
	return ( o );
};
