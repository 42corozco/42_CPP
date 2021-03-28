#include "Squad.hpp"
#include <algorithm>

Squad::Squad() : _count(0), _unit(NULL)
{
}

Squad::Squad( Squad const & obj )
{
	*this = obj;
}

Squad&	Squad::operator=( Squad const & rhs)
{
	this->_count = rhs._count;
	this->_unit = rhs._unit;
	return ( *this );
}

Squad::~Squad()
{
	delete this->_unit;
}

int		Squad::getCount() const
{
	return ( this->_count );
}

ISpaceMarine*	Squad::getUnit(int i) const
{
	if (i < this->_count)
		return (this->_unit[i]);
	return (NULL);
}

int		Squad::push(ISpaceMarine* obj)
{
	this->_count++;
	ISpaceMarine	**tmp = new ISpaceMarine*[this->_count]; 

	if (this->_unit != NULL)
	{
		int i = 0;
		while (i < this->_count - 1)
		{
			tmp[i] = this->_unit[i]; 
			i++;
		}
		tmp[i] = obj;
		this->_unit = tmp;
	}
	else
	{
		tmp[0] = obj;
		this->_unit = tmp;
	}
	return (this->_count);

}
