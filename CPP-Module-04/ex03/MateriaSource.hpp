#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource( MateriaSource const & obj );
	MateriaSource&	operator=( MateriaSource const & rhs);
	~MateriaSource();

	virtual void		learnMateria(AMateria*);
	virtual AMateria*	createMateria(std::string const & type);
	protected:
	private:
	AMateria*	_materia[4];
};

#endif
