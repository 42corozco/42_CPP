#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:
	AssaultTerminator();
	AssaultTerminator( AssaultTerminator const & obj );
	AssaultTerminator&	operator=( AssaultTerminator const & rhs);
	~AssaultTerminator();

	ISpaceMarine	*clone(void) const;
	virtual void	battleCry(void) const;
	virtual void	rangedAttack(void) const;
	virtual void	meleeAttack(void) const;
	protected:
	private:
};

#endif
