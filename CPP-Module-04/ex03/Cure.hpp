#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
	Cure();
	Cure( Cure const & obj );
	Cure&	operator=( Cure const & rhs);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	protected:
	private:
};

#endif
