#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & obj);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &form);
	~ShrubberyCreationForm();

	private:
	ShrubberyCreationForm();
};

#endif
