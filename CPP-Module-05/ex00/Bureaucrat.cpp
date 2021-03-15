#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) \
	, _grade(grade)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj)
{
	*this = obj;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &b)
{
	(std::string)this->_name = b._name;
	this->_grade = b._grade;
	return ( *this );
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::PGrade()
{
	this->_grade--;
}

void	Bureaucrat::MGrade()
{
	this->_grade++;
}

/*gettes*/
std::string const	Bureaucrat::getName() const
{
	return ( this->_name );
}

int					Bureaucrat::getGrade() const
{
	return ( this->_grade );
}

/*settes*/
void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() <<", bureaucrat grade " << i.getGrade() \
		<< "." << std::endl;
	return ( o );
}
