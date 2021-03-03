#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>

class	Peon
{
	public:
	/*Canonical form*/
	Peon();
	Peon( Peon const & obj);
	~Peon();
	Peon&	operator=( Peon const & rhs);

	private:
};

#endif
