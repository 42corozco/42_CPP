#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include <vector>

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class	Squad : public ISquad
{
	public:
	Squad();
	Squad( Squad const & obj );
	Squad&	operator=( Squad const & rhs);
	virtual ~Squad();

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int) const;
	virtual int				push(ISpaceMarine*);
	protected:
	private:
	int				_count;
	std::vector<ISpaceMarine*>	_unit;
};

#endif
