#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm  & obj) : Form(obj)
{
	*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj)
{
	(void)obj;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream fd;

	fd.open(this->getName() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (fd.fail())
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return ;
	}
	fd << "          .     .  .      +     .      .          ." << std::endl;
	fd << "     .       .      .     #       .           ." << std::endl;
	fd << "        .      .         ###            .      .      ." << std::endl;
	fd << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
	fd << "          .      . \"####\"###\"####\"  ." << std::endl;
	fd << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
	fd << "  .             \"#########\"#########\"        .        ." << std::endl;
	fd << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
	fd << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
	fd << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
	fd << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
	fd << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
	fd << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
	fd << "            .     \"      000      \"    .     ." << std::endl;
	fd << "       .         .   .   000     .        .       ." << std::endl;
	fd << ".. .. ..................O000O........................ ......" << std::endl;
	fd.close();
}
