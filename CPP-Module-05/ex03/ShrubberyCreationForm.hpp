#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
	public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & obj);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm & obj);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
	private:
	ShrubberyCreationForm();
};

#endif
