#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class	Victim
{
	public:
	Victim( std::string name );
	Victim( Victim const & obj );
	~Victim();
	Victim&	operator=( Victim const & rhs );

	/*getters random*/
	std::string		getName(void) const;
	void			getPolymorphed(void) const;


	protected:
	Victim();
	std::string	_name;
};

std::ostream &	operator<<( std::ostream & o, Victim const & i );

#endif
