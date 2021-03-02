#include "FragTrap.hpp"

/*------Canonical form--------*/
FragTrap::FragTrap() : _grenadeDmg(80), _shotgunDmg(15), _sniperDmg(35),
	_gunDmg(10), _kunaiDmg(8)
{
	this->_hit = 100;
	this->_maxHit = 100;
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_level = 100;
	this->_name = "FR4G-TP";
	this->_meleeDmg = 30;
	this->_rangedDmg = 20;
	this->_armorDmg = 5;
	std::cout << "FR4G-TP: " << this->_name << " This is sparta!!!!!" << std::endl;
};

FragTrap::FragTrap( std::string name ) : _grenadeDmg(80), _shotgunDmg(15), _sniperDmg(35),
	_gunDmg(10), _kunaiDmg(8)
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
	std::cout << "FR4G-TP: " << this->_name << " This is sparta!!!!!" << std::endl;
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
void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int	res;

	res = rand() % 5;
	std::cout << "--------------------------------------"<< res << "\n";
	if ((int)this->_energy - 25 >= 0)
	{
		this->_energy -= 25;
		switch ( res )
		{
			case 0:
				FragTrap::grenadeAttack(target);
				break ;
			case 1:
				FragTrap::shotgunAttack(target);
				break ;
			case 2:
				FragTrap::sniperAttack(target);
				break ;
			case 3:
				FragTrap::gunAttack(target);
				break ;
			case 4:
				FragTrap::kunaiAttack(target);
				break ;
		}
	}
	else
	{
		std::cout << "Energy points needed: " << 25 - this->_energy << std::endl;
	}
};

/*--------random functions----------*/
void	FragTrap::grenadeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a grenade, causing " << this->_grenadeDmg
		<< " points of damage!" << std::endl;
	this->_dmg = this->_grenadeDmg;
};

void	FragTrap::shotgunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a shotgun, causing " << this->_shotgunDmg
		<< " points of damage!" << std::endl;
	this->_dmg = this->_shotgunDmg;
};

void	FragTrap::sniperAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a sniper, causing " << this->_sniperDmg
		<< " points of damage!" << std::endl;
	this->_dmg = this->_sniperDmg;
};

void	FragTrap::gunAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " whit a gun, causing " << this->_gunDmg
		<< " points of damage!" << std::endl;
	this->_dmg = this->_gunDmg;
};

void	FragTrap::kunaiAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " whit a kunai, causing " << this->_kunaiDmg
		<< " points of damage!" << std::endl;
	this->_dmg = this->_kunaiDmg;
};

/*------getters random------------*/
unsigned int	FragTrap::getGrenadeDmg(void) const
{
	return ( this->_grenadeDmg );
};

unsigned int	FragTrap::getShotgunDmg(void) const
{
	return ( this->_shotgunDmg );
};

unsigned int	FragTrap::getSniperDmg(void) const
{
	return ( this->_sniperDmg );
};

unsigned int	FragTrap::getGunDmg(void) const
{
	return ( this->_gunDmg );
};

unsigned int	FragTrap::getKunaiDmg(void) const
{
	return ( this->_kunaiDmg );
};

unsigned int	FragTrap::getDmg(void) const
{
	return ( this->_dmg );
};
