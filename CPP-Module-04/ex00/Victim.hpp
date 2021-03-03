#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim
{
	public:
	/*Canonical form*/
	Victim();
	Victim( Victim const & obj);
	~Victim();
	Victim&	operator=( Victim const & rhs);

	private:
};

#endif
