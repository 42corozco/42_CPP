#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include <cstdlib>

class	FragTrap : public virtual ClapTrap
{
	public:
	/*Canonical form*/
	FragTrap();
	FragTrap( std::string name );
	FragTrap( FragTrap const & obj);
	~FragTrap();
	FragTrap&	operator=( FragTrap const & rhs);

	/*functions*/
	void	vaulthunter_dot_exe(std::string const & target);

	/*random functions*/
	void	grenadeAttack(std::string const & target);
	void	shotgunAttack(std::string const & target);
	void	sniperAttack(std::string const & target);
	void	gunAttack(std::string const & target);
	void	kunaiAttack(std::string const &target);

	/*getters random*/
	unsigned int	getGrenadeDmg(void) const;
	unsigned int	getShotgunDmg(void) const;
	unsigned int	getSniperDmg(void) const;
	unsigned int	getGunDmg(void) const;
	unsigned int	getKunaiDmg(void) const;
	unsigned int	getDmg(void) const;

	private:
	unsigned int	_grenadeDmg;
	unsigned int	_shotgunDmg;
	unsigned int	_sniperDmg;
	unsigned int	_gunDmg;
	unsigned int	_kunaiDmg;
	unsigned int	_dmg;
};

#endif
