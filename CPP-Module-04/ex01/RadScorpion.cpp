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
