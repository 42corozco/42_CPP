#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	PresidentialPardonForm		&operator=(const PresidentialPardonForm &form);
	~PresidentialPardonForm();

	private:
	PresidentialPardonForm();

};

#endif
