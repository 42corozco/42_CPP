#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class	Form;

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

	void	signForm(Form const & obj) const;

	class	GradeTooHighException : public std::exception
	{
		public:
		GradeTooHighException() {}
		virtual const char* what() const throw()
		{
			return ("1 is the highest rank");
		}
		virtual ~GradeTooHighException() throw() {}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return ("150 is the lowest rank");
		}
		virtual ~GradeTooLowException() throw()
		{}
	};

	/*getters*/
	std::string const 	getName() const;
	int					getGrade() const;

	/*setters*/
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
