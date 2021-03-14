#include "Character.hpp"

Character::Character() : _name("me")
{
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i += 1)
		this->_materia[i] = NULL;
}


Character::Character( Character const & obj )
{
	*this = obj;
}

Character&	Character::operator=( Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i ++)
	{
		this->_materia[i] = NULL;
		if (rhs._materia[i])
			this->_materia[i] = rhs._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_materia[i])
			delete (this->_materia[i]);
	}
//	delete[] (_materia);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_materia[idx])
	{
		this->_materia[idx] = NULL;
		std::cout << "Materia " << idx << " unequipped." << std::endl;
	}
	else
		std::cout << "The Materia does not exist." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && this->_materia[idx])
	{
		this->_materia[idx]->use(target);
	}
	else
		std::cout << "The Materia does not exist." << std::endl;
}
