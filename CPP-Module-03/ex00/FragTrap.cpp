#include "FragTrap.hpp"

FragTrap::FragTrap() : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _name("default"), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
	std::cout << "FR4G-TP: " << this->_name << " This is from... Matilda" << std::endl;
};

FragTrap::FragTrap( std::string name) : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _name(name), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
	std::cout << "FR4G-TP: " << this->_name << " This is from... Matilda" << std::endl;
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


void	FragTrap::takeDAmage(unsigned int amount)
{
	int		res;

	amount = ((int)amount - (int)this->_armorDmg > 0) ? amount - this->_armorDmg : 0;
	if ((int)this->_hit - (int)amount < 1)
	{
		res = (int)this->_maxHit - ((int)this->_maxHit - (int)this->_hit);
		std::cout << "FR4G-TP " << this->_name << " did take " << res << " of dmg!" << std::endl;
		std::cout << "FR4G-TP " << this->_name << " Freedooooooooooom!" << std::endl;
		this->_hit = 0;
	}
	else
	{
		this->_hit -= amount;
		std::cout << "FR4G-TP " << this->_name << " did take " << amount << " of dmg!" << std::endl;
		std::cout << "FR4G-TP " << this->_name << " it doesn't hurt, I'm groot" << std::endl;
	}
	std::cout << "FR4G-TP " << this->_name << " life points : " << this->_hit << std::endl;
};

void	FragTrap::beRepaired(unsigned int amount)
{
	int		res;

	if (this->_hit + amount > this->_maxHit)
		res = (int)this->_maxHit - (int)this->_hit;
	else
		res = (int)amount;
	std::cout << "FR4G-TP " << this->_name << " + " << res << " life points" << std::endl;
	this->_hit += res;
	std::cout << "FR4G-TP " << this->_name << " life points : " << this->_hit << std::endl;
};

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	srand(time(NULL));
	int	res = rand() % 5;

	if ((int)this->_energy - 25 >= 0)
	{
		this->_energy -= 25;
		switch ( res )
		{
			case 0:
				FragTrap::grenadeAttack(target);
			case 1:
				FragTrap::shotgunAttack(target);
			case 2:
				FragTrap::sniperAttack(target);
			case 3:
				FragTrap::gunAttack(target);
			default:
				FragTrap::kunaiAttack(target);
		}
	}
	else
	{
		std::cout << "Energy points needed: " << 25 - this->_energy << std::endl;
	}
};


void	FragTrap::grenadeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::shotgunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::sniperAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::gunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::kunaiAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};

std::string	FragTrap::getName(void)
{
    return ( this->_name );
}
