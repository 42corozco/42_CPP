#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) : _name(obj.getName())
{
	*this = obj;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
	(std::string)this->_name = (std::string)b._name;
	this->_grade = b._grade;
	return ( *this );
}

Bureaucrat::~Bureaucrat()
{
	std::cout << getName() <<" Bye!" << std::endl;
}

void	Bureaucrat::PGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Increment" << std::endl;
	this->_grade--;
}

void	Bureaucrat::MGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Decrement" << std::endl;
	this->_grade++;
}

/*getters*/
std::string const	Bureaucrat::getName() const
{
	return ( this->_name );
}

int					Bureaucrat::getGrade() const
{
	return ( this->_grade );
}

/*setters*/
void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() <<", bureaucrat grade " << i.getGrade() << ".";
	return ( o );
}
