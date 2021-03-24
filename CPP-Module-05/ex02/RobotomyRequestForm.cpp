#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("Default", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj) : Form(obj)
{
	*this = obj;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm & obj)
{
	(void)obj;
	return ( *this );
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << "brr brrr brrr" << std::endl;
	if (rand() % 2 == 1)
		std::cout << executor.getName() << " has been robotomized." << std::endl;
	else
		std::cout << executor.getName() << " failure." << std::endl;
}
