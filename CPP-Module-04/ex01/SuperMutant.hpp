#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
	/*Cano*/
	SuperMutant();
	SuperMutant( SuperMutant const & obj );
	virtual ~SuperMutant();
	SuperMutant&	operator=( SuperMutant const & rhs);

	virtual void	takeDamage(int i);
	protected:
	private:
};

#endif
