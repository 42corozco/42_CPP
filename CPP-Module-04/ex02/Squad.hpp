#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>

# include "ISquad.hpp"

class	Squad : public ISquad
{
	public:
	Squad();
	Squad( Squad const & obj );
	Squad&	operator=( Squad const & rhs);
	~Squad();

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int) const;
//	virtual int				push(ISpaceMarine*);
	protected:
	private:
	int				_count;
	ISpaceMarine	*_unit;
};

#endif
