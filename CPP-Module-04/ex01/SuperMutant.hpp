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
//	SuperMutant( int hp, std::string const & type );
	virtual ~SuperMutant();
	SuperMutant&	operator=( SuperMutant const & rhs);

	virtual void	takeDamage(int i);
	protected:
	private:
};

#endif
