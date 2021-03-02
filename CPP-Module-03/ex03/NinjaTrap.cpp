#include "NinjaTrap.hpp"

/*------Canonical form--------*/
NinjaTrap::NinjaTrap()
{
	this->_hit = 100;
	this->_maxHit = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 100;
	this->_name = "NINJA-TP";
	this->_meleeDmg = 30;
	this->_rangedDmg = 20;
	this->_armorDmg = 5;
	
	std::cout << "NINJA-TP: " << this->_name << " texto1!!!!!" << std::endl;
};

NinjaTrap::NinjaTrap( std::string name)
{
	this->_hit = 100;
	this->_maxHit = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 100;
	this->_name = name;
	this->_meleeDmg = 30;
	this->_rangedDmg = 20;
	this->_armorDmg = 5;
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
	std::cout << "nani1" << cible.getName();
};

void	NinjaTrap::ninjaShoebox( ScavTrap &cible )
{
	std::cout << "nani2" << cible.getName();
};

void	NinjaTrap::ninjaShoebox( NinjaTrap &cible )
{
	std::cout << "nani3" << cible.getName();
};
