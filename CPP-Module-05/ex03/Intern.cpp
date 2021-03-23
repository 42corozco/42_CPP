#include "Intern.hpp"

typedef Form* (Intern::*tabForm)(std::string formTarget);

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	tabForm list[3] = {&Intern::createPresidentialPardon, &Intern::createRobotomyRequest, &Intern::createShrubberyCreation};

	for (int i = 0; i < 3; i++)
	{
		if (name == tab[i])
		{
			std::cout << "Intern creates <" << name << ">." << std::endl;
			return (this->*(list[i]))(target);
		}
	}
	std::cout << "No matching form to create." << std::endl;
	return (NULL);
}

Form *Intern::createPresidentialPardon(std::string target)
{
	return ( new PresidentialPardonForm(target) );
}

Form *Intern::createRobotomyRequest(std::string target)
{
	return ( new RobotomyRequestForm(target) );
}

Form *Intern::createShrubberyCreation(std::string target)
{
	return ( new ShrubberyCreationForm(target) );
}
