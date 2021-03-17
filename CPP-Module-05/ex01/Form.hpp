#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
	Form(std::string const name, int gradeSig, int gradeExe);
	Form(const Form & obj);
	Form &operator=(const Form & o);
	~Form();

	void	beSigned(Bureaucrat const & obj);
		
	/*getters*/
	const std::string	getName() const;
	int					getSigned() const;
	int					getGradeSig() const;
	int					getGradeExe() const;

	/*setters*/
	void				setName(const std::string name);
	void				setSigned(bool i);

	class	GradeTooHighException : public std::exception
	{
		public:
		GradeTooHighException() {}
		virtual const char* what() const throw()
		{
			return ("is the highest rank");
		}
		virtual ~GradeTooHighException() throw() {}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		GradeTooLowException() {}
		virtual const char* what() const throw()
		{
			return ("is the lowest rank");
		}
		virtual ~GradeTooLowException() throw() {}
	};

	protected:
	private:
	Form();
	const std::string	_name;
	bool				_signed;
	const int			_gradeSig;
	const int			_gradeExe;
};

std::ostream &	operator<<( std::ostream & o, Form const & i );

#endif
