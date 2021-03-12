#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>

# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:
	TacticalMarine();
	TacticalMarine( TacticalMarine const & obj );
	TacticalMarine&	operator=( TacticalMarine const & rhs);
	~TacticalMarine();

	ISpaceMarine	*clone(void) const;
	virtual void	battleCry(void) const;
	virtual void	rangedAttack(void) const;
	virtual void	meleeAttack(void) const;
	protected:
	private:
};

#endif
