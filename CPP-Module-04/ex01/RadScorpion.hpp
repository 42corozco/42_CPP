#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
	/*Cano*/
	RadScorpion();
	RadScorpion( RadScorpion const & obj );
//	RadScorpion( int hp, std::string const & type );
	~RadScorpion();
	RadScorpion&	operator=( RadScorpion const & rhs);

	virtual void	takeDamage(int i);
	protected:
	private:
};

#endif
