#include "NinjaTrap.hpp"

/*------Canonical form--------*/
NinjaTrap::NinjaTrap()
{
	this->_hit = 60;
	this->_maxHit = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_level = 1;
	this->_name = "NINJA-TP";
	this->_meleeDmg = 60;
	this->_rangedDmg = 5;
	this->_armorDmg = 0;
	
	std::cout << "NINJA-TP: " << this->_name << " We got a badass here!" << std::endl;
};

NinjaTrap::NinjaTrap( std::string name )
{
	this->_hit = 60;
	this->_maxHit = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeDmg = 60;
	this->_rangedDmg = 5;
	this->_armorDmg = 0;
	std::cout << "NINJA-TP: " << this->_name << " We got a badass here!" << std::endl;
};

NinjaTrap::NinjaTrap( NinjaTrap const & obj)
{
	*this = obj;
};

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor: \"NINJA-TP\": Damn it!" << _name << std::endl;
};

NinjaTrap &	NinjaTrap::operator=( NinjaTrap const & rhs)
{
	this->_hit = rhs._hit;
	this->_maxHit = rhs._maxHit;
	this->_energy = rhs._energy;
	this->_maxEnergy = rhs._maxEnergy;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeDmg = rhs._meleeDmg;
	this->_rangedDmg = rhs._rangedDmg;
	this->_armorDmg = rhs._armorDmg;
	return *this;
}


void	NinjaTrap::ninjaShoebox( FragTrap &cible )
{
	std::cout << this->_name << " :takes a bite out of " << cible.getName() << std::endl;
};

void	NinjaTrap::ninjaShoebox( ScavTrap &cible )
{
	std::cout << this->_name << " :throws a washing machine at " << cible.getName() << std::endl;
};

void	NinjaTrap::ninjaShoebox( NinjaTrap &cible )
{
	std::cout << this->_name << " : gives " << cible.getName() <<" a hug." <<std::endl;
};
