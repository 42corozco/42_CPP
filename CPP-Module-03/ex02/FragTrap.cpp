#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("default"), _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
};

FragTrap::FragTrap( std::string name) : _name(name), _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
};

FragTrap::FragTrap( FragTrap const & obj)
{
	*this = obj;
};

FragTrap::~FragTrap()
{
	std::cout << "Muerte" << std::endl;
};

FragTrap &	FragTrap::operator=( FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_maxHit = rhs._maxHit;
	this->_energy = rhs._energy;
	this->_maxEnergy = rhs._maxEnergy;
	this->_level = rhs._level;
	this->_meleeDmg = rhs._meleeDmg;
	this->_rangedDmg = rhs._rangedDmg;
	this->_armorDmg = rhs._armorDmg;
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at range, causing " << this->_rangedDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};
