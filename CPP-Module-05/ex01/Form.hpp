#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class	Form
{
	public:
	Form(std::string const name, int gradeSig, int gradeExe);
	Form(const Form & obj);
	~Form();

	/*getters*/
	const std::string	getName() const;
	int					getSigned() const;
	int					getGradeSig() const;
	int					getGradeExe() const;

	/*setters*/
	void				setName(const std::string name);
	void				setSigned(bool i);

	protected:
	private:
	Form();
	Form &operator=(const Form & o);
	const std::string	_name;
	bool				_signed;
	const int			_gradeSig;
	const int			_gradeExe;
};

std::ostream &	operator<<( std::ostream & o, Form const & i )
{
	o << "Form: " <<i.getName() << " |Signed: " << i.getSigned() \
		<< " |Grade requirend to sing: "<< i.getGradeSig() \
		<< " |Grade requirend to execute: "<< i.getGradeExe() << ".";
	return ( o );
}

#endif
