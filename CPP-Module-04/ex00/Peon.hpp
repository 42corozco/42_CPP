#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Peon : public Victim
{
	public:
	/*Canonical form*/
	Peon( std::string name );
	Peon( Peon const & obj);
	~Peon();
	Peon&	operator=( Peon const & rhs);
	void	getPolymorphed(void) const;

	private:
	Peon();
};

#endif
