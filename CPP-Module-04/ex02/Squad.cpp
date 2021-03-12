#include "Squad.hpp"

Squad::Squad() : _count(0)
{
}

Squad::Squad( Squad const & obj )
{
	*this = obj;
}

Squad&	Squad::operator=( Squad const & rhs)
{
	this->_count = rhs._count;
	std::vector<ISpaceMarine*> tmp(rhs._unit);
	this->_unit = tmp;
//	this->_unit = rhs._unit;
	return ( *this );
}

Squad::~Squad()
{
}

int				Squad::getCount() const
{
	return ( this->_count );
}

ISpaceMarine*	Squad::getUnit(int i) const //falta terminar
{
	if (i < (int)_unit.size())
		return (_unit[i]);
	return (NULL);
}
//	 int				Squad::push(ISpaceMarine*);
