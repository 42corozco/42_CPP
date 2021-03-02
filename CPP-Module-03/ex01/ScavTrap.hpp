/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:57:23 by corozco           #+#    #+#             */
/*   Updated: 2021/03/02 12:11:57 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class		ScavTrap
{
	public:
	/*Canonical form*/
	ScavTrap();
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const & obj);
	~ScavTrap();
	ScavTrap&	operator=( ScavTrap const & rhs);

	/*functions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDAmage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(unsigned int var);

	/*getters*/
	std::string		getName(void) const;
	unsigned int	getMeleeDmg(void) const;
	unsigned int	getRangedDmg(void) const;


	private:
	unsigned int	_hit;
	unsigned int	_maxHit;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_meleeDmg;
	unsigned int	_rangedDmg;
	unsigned int	_armorDmg;
};

#endif
