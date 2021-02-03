#include "FragTrap.hpp"

/*------Canonical form--------*/
FragTrap::FragTrap() : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _name("Noah"), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
	this->_grenadeDmg = 80;
	this->_shotgunDmg = 15;
	this->_sniperDmg = 35;
	this->_gunDmg = 10;
	this->_kunaiDmg = 8;
	std::cout << "FR4G-TP: " << this->_name << " This is sparta!!!!!" << std::endl;
};

FragTrap::FragTrap( std::string name) : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _name(name), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
	/* Braveheart (1995) */
	this->_grenadeDmg = 80;
	this->_shotgunDmg = 15;
	this->_sniperDmg = 35;
	this->_gunDmg = 10;
	this->_kunaiDmg = 8;
	std::cout << "FR4G-TP: " << this->_name << " This is from... Matilda" << std::endl;
};

FragTrap::FragTrap( FragTrap const & obj)
{
	*this = obj;
};

FragTrap::~FragTrap()
{
	/*Tombstone (1993)*/
	std::cout << "Destructor: \"this is funny\"" << std::endl;
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

/*----------functions----------*/
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP -> " << this->_name << " attacks "
		<< target << " at range, causing " << this->_rangedDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP -> " << this->_name << " attacks "
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
		std::cout << "FR4G-TP (i) " << this->_name << " did take " << res << " of dmg!" << std::endl;
		/* Braveheart (1995) */
		std::cout << "FR4G-TP: " << this->_name << " Freedooooooooooom!" << std::endl;
		this->_hit = 0;
	}
	else
	{
		this->_hit -= amount;
		std::cout << "FR4G-TP (i) " << this->_name << " did take " << amount << " of dmg!" << std::endl;
		std::cout << "FR4G-TP: " << this->_name << " it doesn't hurt, I'm groot" << std::endl;
	}
	std::cout << "FR4G-TP (i) " << this->_name << " life points : " << this->_hit << std::endl;
};

void	FragTrap::beRepaired(unsigned int amount)
{
	int		res;

	if (this->_hit + amount > this->_maxHit)
		res = (int)this->_maxHit - (int)this->_hit;
	else
		res = (int)amount;
	std::cout << "FR4G-TP -> " << this->_name << " + " << res << " life points" << std::endl;
	this->_hit += res;
	std::cout << "FR4G-TP (i) " << this->_name << " life points : " << this->_hit << std::endl;
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

/*-------getters----------*/
std::string	FragTrap::getName(void)
{
	return ( this->_name );
};

unsigned int	FragTrap::getMeleeDmg(void)
{
	return ( this->_meleeDmg );
};

unsigned int	FragTrap::getRangedDmg(void)
{
	return ( this->_rangedDmg );
};

/*--------random functions----------*/
void	FragTrap::grenadeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a grenade, causing " << this->_grenadeDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::shotgunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a shotgun, causing " << this->_shotgunDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::sniperAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a sniper, causing " << this->_sniperDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::gunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " whit a gun, causing " << this->_gunDmg
		<< " points of damage!" << std::endl;
};

void	FragTrap::kunaiAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " whit a kunai, causing " << this->_kunaiDmg
		<< " points of damage!" << std::endl;
};

/*------getters random------------*/
unsigned int	FragTrap::getGrenadeDmg(void)
{
	return ( this->_grenadeDmg );
};

unsigned int	FragTrap::getShotgunDmg(void)
{
	return ( this->_shotgunDmg );
};

unsigned int	FragTrap::getSniperDmg(void)
{
	return ( this->_sniperDmg );
};

unsigned int	FragTrap::getGunDmg(void)
{
	return ( this->_gunDmg );
};

unsigned int	FragTrap::getKunaiDmg(void)
{
	return ( this->_kunaiDmg );
};
