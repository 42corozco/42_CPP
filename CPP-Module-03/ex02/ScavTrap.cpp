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
	std::cout << "SC4V-TP: " << this->_name << " Shut up and hurry!!!!!!" << std::endl;
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
	std::cout << "SC4V-TP: " << this->_name << " Shut up and hurry!!!!!!" << std::endl;
};

ScavTrap::ScavTrap( ScavTrap const & obj)
{
	*this = obj;
};

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor: \"SC4V-TP\": Ahh!" << std::endl;
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
		std::cout << "I don't like this... " << std::endl;
	switch ( var )
	{
		case 1:
			std::cout << "jump 500 times on one foot" << std::endl;
			break ;
		case 2:
			std::cout << "shout your name 200 times" << std::endl;
			break ;
		case 3:
			std::cout << "marathon 2000km" << std::endl;
			break ;
		case 4:
			std::cout << "touch your nose with your tongue" << std::endl;
			break ;
	}
};
