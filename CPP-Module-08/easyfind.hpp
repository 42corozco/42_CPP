#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>

class	NotFoundException : public std::exception
{
	public:
		NotFoundException() {}
		virtual const char* what() const throw()
		{
			return ("Element not found");
		}
		virtual ~NotFoundException() throw() {}
};

template < typename T>
void	easyfind(T & t, int i)
{
	if (t.end() != std::find(t.begin(), t.end(), i))
		std::cout << "Element found" << std::endl;
	else
		throw NotFoundException();
}

#endif
