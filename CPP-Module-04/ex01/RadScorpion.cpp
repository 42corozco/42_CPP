#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & obj )
{
	*this = obj;
}
//	RadScorpion( int hp, std::string const & type );
RadScorpion::~RadScorpion()
{
	std::cout <<  "* SPROTCH *" << std::endl;
}

RadScorpion&	RadScorpion::operator=( RadScorpion const & rhs)
{
	this->setHP(rhs.getHP());
	this->setType(rhs.getType());
	return (*this);
}

void			RadScorpion::takeDamage(int i)
{
	int tmp;

	i -= 3;
	tmp = this->_hp - i;
	if (tmp < 0)
		this->_hp = 0;
	else 
		this->_hp -= i;
}
