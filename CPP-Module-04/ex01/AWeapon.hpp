#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	public:
	/*Can*/
	AWeapon( std::string const & name, int apcost, int damage );
	AWeapon( AWeapon const & obj );
	~AWeapon();
	AWeapon&	operator=( AWeapon const & rhs);

	/*Getters*/
	std::string	getName() const;
	int			getAPCost() const;
	int			getDamage() const;

	virtual void	attack() const = 0;

	protected:
	AWeapon();
	std::string	_name;
	int			_apcost;
	int			_damage;
};

#endif
