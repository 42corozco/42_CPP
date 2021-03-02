/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:57:00 by corozco           #+#    #+#             */
/*   Updated: 2021/03/02 12:34:34 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*------Canonical form--------*/
ScavTrap::ScavTrap() : _hit(100), _maxHit(100), _energy(50), _maxEnergy(50),
_level(1), _name("Manolo"), _meleeDmg(20), _rangedDmg(15), _armorDmg(3)
{
	std::cout << "SC4V-TP: " << this->_name << " texto1!!!!!" << std::endl;
};

ScavTrap::ScavTrap( std::string name) : _hit(100), _maxHit(100), _energy(50), _maxEnergy(50),
_level(1), _name(name), _meleeDmg(20), _rangedDmg(15), _armorDmg(3)
{
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
void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP -> " << this->_name << " attacks "
		<< target << " at range, causing " << this->_rangedDmg
		<< " points of damage!" << std::endl;
};

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP -> " << this->_name << " attacks "
		<< target << " at melee, causing " << this->_meleeDmg
		<< " points of damage!" << std::endl;
};

void	ScavTrap::takeDAmage(unsigned int amount)
{
	int		res;

	amount = ((int)amount - (int)this->_armorDmg > 0) ? amount - this->_armorDmg : 0;
	if ((int)this->_hit - (int)amount < 1)
	{
		res = (int)this->_maxHit - ((int)this->_maxHit - (int)this->_hit);
		std::cout << "SC4V-TP (i) " << this->_name << " did take " << res << " of dmg!" << std::endl;
		/* Braveheart (1995) */
		std::cout << "SC4V-TP: " << this->_name << " texto4!" << std::endl;
		this->_hit = 0;
	}
	else
	{
		this->_hit -= amount;
		std::cout << "SC4V-TP (i) " << this->_name << " did take " << amount << " of dmg!" << std::endl;
		std::cout << "SC4V-TP: " << this->_name << " texto5!" << std::endl;
	}
	std::cout << "SC4V-TP (i) " << this->_name << " life points : " << this->_hit << std::endl;
};

void	ScavTrap::beRepaired(unsigned int amount)
{
	int		res;

	if (this->_hit + amount > this->_maxHit)
		res = (int)this->_maxHit - (int)this->_hit;
	else
		res = (int)amount;
	std::cout << "SC4V-TP -> " << this->_name << " + " << res << " life points" << std::endl;
	this->_hit += res;
	std::cout << "SC4V-TP (i) " << this->_name << " life points : " << this->_hit << std::endl;
};

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

/*-------getters----------*/
std::string	ScavTrap::getName(void) const
{
	return ( this->_name );
};

unsigned int	ScavTrap::getMeleeDmg(void) const
{
	return ( this->_meleeDmg );
};

unsigned int	ScavTrap::getRangedDmg(void) const
{
	return ( this->_rangedDmg );
};

