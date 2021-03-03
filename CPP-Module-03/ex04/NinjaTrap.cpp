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
	
	std::cout << "NINJA-TP: " << this->_name << " texto1!!!!!" << std::endl;
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
	std::cout << "NINJA-TP: " << this->_name << " text2!!!!!" << std::endl;
};

NinjaTrap::NinjaTrap( NinjaTrap const & obj)
{
	*this = obj;
};

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor: \"NINJA-TP\": " << _name << std::endl;
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
	std::cout << "nani1" << cible.getName() << std::endl;
};

void	NinjaTrap::ninjaShoebox( ScavTrap &cible )
{
	std::cout << "nani2" << cible.getName() << std::endl;
};

void	NinjaTrap::ninjaShoebox( NinjaTrap &cible )
{
	std::cout << "nani3" << cible.getName() << std::endl;
};
