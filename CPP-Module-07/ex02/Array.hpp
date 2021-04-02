#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template < typename T >
class Array
{
	public:
		Array();
		Array(unsigned int _n);
		~Array() { delete [] _Array; };

		unsigned int	size() const { return this->_n; }


	protected:
	private:
		T * _Array;
};

#endif
