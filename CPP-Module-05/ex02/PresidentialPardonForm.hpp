#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &form);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &form);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
	private:
	PresidentialPardonForm();

};

#endif
