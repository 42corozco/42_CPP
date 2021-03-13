#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type("not set")
{
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
}

AMateria::AMateria( AMateria const & obj )
{
	*this = obj;
}

AMateria&	AMateria::operator=( AMateria const & rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return ( *this );
}

AMateria::~AMateria()
{
}

/*Getters*/
std::string const & AMateria::getType() const
{
}

unsigned int AMateria::getXP() const
{
	return ( this->_xp );
}

/*setters*/
void	AMateria::setType(std::string const & type)
{
	this->_type = type;
}

void	AMateria::setXp(unsigned int xp)
{
	this->_xp = xp;
}

void AMateria::use(ICharacter &target)
{
	this->_xp += 10;
//	this->setXP(this->getXP() + 10);
//	std::cout << "AMateria heals " << target.getName() << " ." << std::endl;
	(void)target;
}
