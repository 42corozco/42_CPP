#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
	Character();
	Character(const std::string &name);
	Character( Character const & obj );
	Character&	operator=( Character const & rhs);
	~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	protected:
	private:
	AMateria*	_materia[4];
	std::string	_name;
};

#endif
