#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon
{
	public:
	/*Can*/
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();
	std::string	getName() const;

	/*Getters*/
	int			getAPCost() const;
	int			getDamage() const;

//	void		attack() const = 0;
	private:
	AWeapon();
};

#endif
