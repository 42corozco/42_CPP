#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	AMateria
{
	public:
	AMateria();
	AMateria(std::string const & type);
	AMateria( AMateria const & obj );
	AMateria&	operator=( AMateria const & rhs);
	virtual ~AMateria();

	/*Getters*/
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	/*setters*/
	void	setType(std::string const & type);
	void	setXp(unsigned int xp);

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	protected:
	private:
	unsigned int	_xp;
	std::string 	_type;
};

#endif
