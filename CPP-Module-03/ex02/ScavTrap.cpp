#include "ScavTrap.hpp"

/*------Canonical form--------*/
ScavTrap::ScavTrap()
{
	this->_hit = 100;
	this->_maxHit = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_level = 1;
	this->_name = "SC4V-TP";
	this->_meleeDmg = 20;
	this->_rangedDmg = 15;
	this->_armorDmg = 3;
	
	std::cout << "SC4V-TP: " << this->_name << " texto1!!!!!" << std::endl;
};

ScavTrap::ScavTrap( std::string name)
{
	this->_hit = 100;
	this->_maxHit = 100;
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeDmg = 20;
	this->_rangedDmg = 15;
	this->_armorDmg = 3;
	std::cout << "SC4V-TP: " << this->_name << " text2!!!!!" << std::endl;
};

ScavTrap::ScavTrap( ScavTrap const & obj)
{
	*this = obj;
};

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor: \"texto3\"" << std::endl;
};

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs)
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

/*----------functions----------*/
void	ScavTrap::challengeNewcomer(unsigned int var)
{
	if ( var < 1 || var > 4)
		std::cout << "no hay challenge" << std::endl;
	switch ( var )
	{
		case 1:
			std::cout << "challenge 1" << std::endl;
			break ;
		case 2:
			std::cout << "challenge 2" << std::endl;
			break ;
		case 3:
			std::cout << "challenge 3" << std::endl;
			break ;
		case 4:
			std::cout << "challenge 4" << std::endl;
			break ;
	}
};
