#include "SuperTrap.hpp"

/*------Canonical form--------*/
SuperTrap::SuperTrap() : FragTrap()
{
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_name = "NINJA-TP";
	this->_meleeDmg = 60;
	std::cout << "NINJA-TP: " << this->_name << " texto1!!!!!" << std::endl;
};

SuperTrap::SuperTrap(std::string name) : FragTrap(name)
{
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_name = name;
	this->_meleeDmg = 60;
	std::cout << "NINJA-TP: " << this->_name << " text2!!!!!" << std::endl;
};

SuperTrap::SuperTrap( SuperTrap const & obj)
{
	*this = obj;
};

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor: \"NINJA-TP\": " << _name << std::endl;
};

SuperTrap &	SuperTrap::operator=( SuperTrap const & rhs)
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

