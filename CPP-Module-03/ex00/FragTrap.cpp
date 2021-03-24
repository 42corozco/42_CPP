/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:35:28 by corozco           #+#    #+#             */
/*   Updated: 2021/03/02 11:35:30 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	/* 300 (2006) */
	std::cout << "FR4G-TP: " << this->_name << " This is sparta!!!!!" << std::endl;
};

FragTrap::FragTrap( std::string name) : _hit(100), _maxHit(100), _energy(100), _maxEnergy(100),
_level(1), _name(name), _meleeDmg(30), _rangedDmg(20), _armorDmg(5)
{
	this->_grenadeDmg = 80;
	this->_shotgunDmg = 15;
	this->_sniperDmg = 35;
	this->_gunDmg = 10;
	this->_kunaiDmg = 8;
	/* Leon (1994) */
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
		/* Guardians of the Galaxy(2014) */
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

/*-------getters----------*/
std::string	FragTrap::getName(void) const
{
	return ( this->_name );
};

unsigned int	FragTrap::getMeleeDmg(void) const
{
	return ( this->_meleeDmg );
};

unsigned int	FragTrap::getRangedDmg(void) const
{
	return ( this->_rangedDmg );
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
		<< target << " with a gun, causing " << this->_gunDmg
		<< " points of damage!" << std::endl;
	this->_dmg = this->_gunDmg;
};

void	FragTrap::kunaiAttack(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks "
		<< target << " with a kunai, causing " << this->_kunaiDmg
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
