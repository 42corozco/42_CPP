#include "Form.hpp"

Form::Form() : _name("Default"), _signed(0), _gradeSig(1), _gradeExe(150)
{
}

Form::Form(std::string const name, const int gradeSig, const int gradeExe) \
	: _name(name), _gradeSig(gradeSig), _gradeExe(gradeExe)
{
	this->_signed = 0;
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
