#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
	/*Cano*/
	Enemy();
	Enemy( Enemy const & obj );
	Enemy( int hp, std::string const & type );
	virtual ~Enemy();
	Enemy&	operator=( Enemy const & rhs);

	/*Getters*/
	std::string		getType() const;
	int				getHP() const;

	/*Setters*/
	void			setType(std::string type);
	void			setHP(int i);

	/*method*/
	virtual void	takeDamage(int i);

	private:
	protected:
	int			_hp;
	std::string	_type;

};

#endif
