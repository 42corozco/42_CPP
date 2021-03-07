#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
	/*Cano*/
	Character( std::string const & name );
	Character( Character const & obj );
	~Character();
	Character&	operator=( Character const & rhs);

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	/*Getters*/
	std::string	getName() const;
	int			getAp() const;
	AWeapon		*getWeapon(void) const;


	protected:
	std::string	_name;
	int			_ap;
	AWeapon		*_awa;
	private:
	Character();
};

std::ostream	&operator<< (std::ostream &o, const Character &rhs);

#endif
