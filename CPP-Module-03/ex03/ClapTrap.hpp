#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class		ClapTrap
{
	public:
	/*Canonical form*/
	ClapTrap();
	ClapTrap( ClapTrap const & obj);
	~ClapTrap();
	ClapTrap&	operator=( ClapTrap const & rhs);

	/*functions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDAmage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	/*getters*/
	std::string		getName(void) const;
	unsigned int	getMeleeDmg(void) const;
	unsigned int	getRangedDmg(void) const;

	protected:
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
