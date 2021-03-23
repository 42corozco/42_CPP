#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeSig(1), _gradeExe(150)
{
}

Form::Form(std::string const name, const int gradeSig, const int gradeExe) \
	: _name(name), _gradeSig(gradeSig), _gradeExe(gradeExe)
{
	this->_signed = false;
	if (this->getGradeSig() < 1 || this->getGradeExe() < 1)
		throw GradeTooHighException();
	else if (this->getGradeSig() > 150 || this->getGradeExe() > 150)
		throw GradeTooLowException();
}

Form::Form(const Form & obj) : _name(obj.getName()) \
	, _gradeSig(obj.getGradeSig()), _gradeExe(obj.getGradeExe())
{
	*this = obj;
}

Form &Form::operator=(const Form & obj)
{
	(std::string)this->_name = obj.getName();
	this->_signed = obj._signed;
	return ( *this );
}

Form::~Form()
{
}

void	Form::beSigned(Bureaucrat const & obj)
{
	try
	{
		if (obj.getGrade() > this->_gradeSig)
			throw Form::GradeTooLowException();
		this->_signed = true;
	}
	catch(GradeTooLowException & e)
	{
		(void)e;
	}
	obj.signForm(*this);
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() > this->getGradeExe())
			throw(Form::GradeTooLowException());
	}
	else
		throw(Form::NoSignedExeption());
}

/*getters*/
const std::string	Form::getName() const
{
	return (this->_name);
}

int					Form::getSigned() const
{
	return (this->_signed);
}

int					Form::getGradeSig() const
{
	return (this->_gradeSig);
}

int					Form::getGradeExe() const
{
	return (this->_gradeExe);
}

/*setters*/
void				Form::setName(const std::string name)
{
	(std::string)this->_name = name;
}

void				Form::setSigned(bool i)
{
	this->_signed = i;
}

std::ostream &	operator<<( std::ostream & o, Form const & i )
{
	o << "Form: " <<i.getName() << " |Signed: " << i.getSigned() \
		<< " |Grade requirend to sing: "<< i.getGradeSig() \
		<< " |Grade requirend to execute: "<< i.getGradeExe() << ".";
	return ( o );
}

