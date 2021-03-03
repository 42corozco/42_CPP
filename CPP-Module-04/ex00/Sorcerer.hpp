#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class	Sorcerer
{
	public:
	/*Canonical form*/
	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & obj );
	~Sorcerer();
	Sorcerer&	operator=( Sorcerer const & rhs );

	private:
	Sorcerer();
	std::string	_name;
	std::string _title;
};

#endif
