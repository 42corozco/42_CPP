#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("Default", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) : Form(obj)
{
	*this = obj;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
	(void)obj;
	return ( *this );
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
