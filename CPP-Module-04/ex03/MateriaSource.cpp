#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i += 1)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & obj )
{
	*this = obj;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i += 1)
	{
		this->_materia[i] = NULL;
		this->_materia[i] = rhs._materia[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int		i;

	i = 0;
	if (m)
	{
		while (i < 4)
		{
			if (!this->_materia[i])
			{
				this->_materia[i] = m;
				return ;
			}
			if (i == 3)
				std::cout << "The inventory is full." << std::endl;
			i++;
		}
	}
	else
		std::cout << "The Materia does not exist." << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = 0;
	while (i < 4 && this->_materia[i] && this->_materia[i]->getType() != type)
		i++;
	if (i < 4 && this->_materia[i] && this->_materia[i]->getType() == type)
		return (this->_materia[i]->clone());
	return (NULL);
}
