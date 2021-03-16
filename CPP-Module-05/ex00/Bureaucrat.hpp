#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	public:
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(const Bureaucrat & obj);
	Bureaucrat &operator=(const Bureaucrat &b);
	~Bureaucrat();

	/*principal fon*/
	void	PGrade();
	void	MGrade();

	class	GradeTooHighException : public std::exception
	{
		public:
		GradeTooHighException() {}
		virtual const char* what() const throw()
		{
			return ("is the highest rank\n");
		}
		virtual ~GradeTooHighException() throw() {}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("is the lowest rank\n");
		}
		virtual ~GradeTooLowException() throw()
		{}
	};

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
