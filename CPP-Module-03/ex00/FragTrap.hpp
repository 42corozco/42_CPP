#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class	FragTrap
{
	public:
	/*Canonical form*/
	FragTrap();
	FragTrap( std::string name );
	FragTrap( FragTrap const & obj);
	~FragTrap();
	FragTrap&	operator=( FragTrap const & rhs);

	/*functions*/
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDAmage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

	/*getters*/
	std::string		getName(void);
	unsigned int	getMeleeDmg(void);
	unsigned int	getRangedDmg(void);

	/*random functions*/
	void	grenadeAttack(std::string const & target);
	void	shotgunAttack(std::string const & target);
	void	sniperAttack(std::string const & target);
	void	gunAttack(std::string const & target);
	void	kunaiAttack(std::string const &target);

	/*getters random*/
	unsigned int	getGrenadeDmg(void);
	unsigned int	getShotgunDmg(void);
	unsigned int	getSniperDmg(void);
	unsigned int	getGunDmg(void);
	unsigned int	getKunaiDmg(void);

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

	unsigned int	_grenadeDmg;
	unsigned int	_shotgunDmg;
	unsigned int	_sniperDmg;
	unsigned int	_gunDmg;
	unsigned int	_kunaiDmg;
};

#endif
