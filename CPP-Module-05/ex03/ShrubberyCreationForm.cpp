#include "ShrubberyCreationForm.hpp"
#include <cerrno>
#include <cstring>

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

	std::string tmp = this->getName() + "_shrubbery";
	const char * file = tmp.c_str();
	fd.open(file, std::ofstream::out | std::ofstream::trunc);
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
