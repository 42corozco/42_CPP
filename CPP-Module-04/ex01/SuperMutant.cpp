#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & obj )
{
	*this = obj;
}
//	SuperMutant( int hp, std::string const & type );
SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant&	SuperMutant::operator=( SuperMutant const & rhs)
{
	this->setHP(rhs.getHP());
	this->setType(rhs.getType());
	return (*this);
}

void			SuperMutant::takeDamage(int i)
{
	int tmp;

	i -= 3;
	tmp = this->_hp - i;
	if (tmp < 0)
		this->_hp = 0;
	else 
		this->_hp -= i;
}
