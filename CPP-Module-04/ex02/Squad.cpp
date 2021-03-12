#include "Squad.hpp"
#include <algorithm>

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
	for (int i = 0; i < (int)_unit.size(); i++)
	{
		this->_count--;
		delete (_unit[i]);
	}
	_unit.clear();
}

int		Squad::getCount() const
{
	return ( this->_count );
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	if (i < (int)_unit.size())
		return (_unit[i]);
	return (NULL);
}

int		Squad::push(ISpaceMarine* obj)
{
	_unit.push_back(obj);
	this->_count++;
	return ((int)this->_unit.size());
}
