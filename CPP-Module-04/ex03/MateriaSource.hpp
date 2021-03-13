#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

class	MateriaSource
{
	public:
	MateriaSource();
	MateriaSource( MateriaSource const & obj );
	MateriaSource&	operator=( MateriaSource const & rhs);
	~MateriaSource();

	protected:
	private:
};

#endif
