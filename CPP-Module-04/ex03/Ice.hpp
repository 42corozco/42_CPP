#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
	Ice();
	Ice( Ice const & obj );
	Ice&	operator=( Ice const & rhs);
	~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
	protected:
	private:
};

#endif
