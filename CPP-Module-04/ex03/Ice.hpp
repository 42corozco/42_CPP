#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class	Ice : public AMateria
{
	public:
	Ice();
	Ice( Ice const & obj );
	Ice&	operator=( Ice const & rhs);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	protected:
	private:
};

#endif
