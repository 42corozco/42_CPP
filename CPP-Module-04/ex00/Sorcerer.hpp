#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class	Sorcerer
{
	public:
	/*Canonical form*/
	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & obj );
	~Sorcerer();
	Sorcerer&	operator=( Sorcerer const & rhs );

	/*getters random*/
	std::string	getName(void) const;
	std::string getTitle(void) const;

	/*method*/
	void polymorph(Victim const &) const;

	private:
	Sorcerer();
	std::string	_name;
	std::string _title;
};

std::ostream &	operator<<( std::ostream & o, Sorcerer const & i );

#endif
