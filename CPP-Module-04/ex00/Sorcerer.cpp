#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	this->_name = "Quimera";
	this->_title = "Conejo";
	std::cout << this->_name << ", " << this->_title \
		<< ", is born !" << std::endl;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title \
		<< ", is born!" << std::endl;
};

Sorcerer::Sorcerer( Sorcerer const & obj )
{
	*this = obj;
};

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title \
		<< ", is dead. Consequences will never be the same!" << std::endl;
};

Sorcerer&	Sorcerer::operator=( Sorcerer const & rhs )
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
};

/*getters random*/
std::string	Sorcerer::getName(void) const
{
	return (this->_name);
};

std::string	Sorcerer::getTitle(void) const
{
	return (this->_title);
};

std::ostream &	operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.getName() << ", " << i.getTitle() \
		<< ", and I like ponies!" << std::endl;
	return ( o );
}

