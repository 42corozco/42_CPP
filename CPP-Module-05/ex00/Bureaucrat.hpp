#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	public:
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(const Bureaucrat & obj);
	Bureaucrat &operator=(const Bureaucrat &b);
	~Bureaucrat();

	/*principal fon*/
	void	PGrade();
	void	MGrade();

	void	GradeTooHighException();
	void	GradeTooLowException();

	/*gettes*/
	std::string const 	getName() const;
	int					getGrade() const;

	/*settes*/
	void	setGrade(int grade);

	protected:
	private:
	std::string const	_name;
	int					_grade;

	/*private fonc*/
	Bureaucrat();
};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );

#endif
