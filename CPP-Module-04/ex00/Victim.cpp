#include "Victim.hpp"

Victim::Victim(void)
{
	this->_name = "Troll";
};

Victim::Victim( std::string name ) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" \
		<< std::endl;
};

Victim::Victim( Victim const & obj )
{
	*this = obj;
};

Victim::~Victim()
{
	std::cout << "Victim "<< _name << " just died for no apparent reason!" \
		<< std::endl;
};

Victim&	Victim::operator=( Victim const & rhs )
{
	this->_name = rhs._name;
	return (*this);
};

/*getters random*/
std::string	Victim::getName(void) const
{
	return (this->_name);
};

void		Victim::getPolymorphed(void) const //aun no terminado
{
	std::cout <<this->_name << " has been turned into a cute little sheep!" \
		<< std::endl;
};

std::ostream &	operator<<( std::ostream & o, Victim const & i )
{
	o << "I am " << i.getName() << " and I like otters!" << std::endl;
	return ( o );
};
