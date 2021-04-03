#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template < typename T >
class Array
{
	public:
		Array<T>()
		{
			this->_Array = new T[0];
			this->_n = 0;
		}

		Array<T>(unsigned int n)
		{
			this->_Array = new T[n];
			this->_n = n;
		}

		Array<T>( Array<T> const & obj)
		{
			*this = obj;
		}

		Array<T>& operator=( Array<T> const & obj)
		{
			this->_n = obj._n;
			if ( this->_Array )
				delete [] this->_Array;
			this->_Array = new T[this->_n];
			for (int i = 0; i < this->_n; i++)
				this->_Array[i] = obj[i];
			return ( *this );
		}

		~Array<T>()
		{
			if ( this->_Array )
				delete [] this->_Array;
		}

		T & operator[](int index)
		{
			if (index >= this->_n)
				throw std::exception(); 
				//throw std::out_of_range("Error size"); 
			return (this->_Array[index]);
		}
		

		unsigned int	size() const { return ( this->_n ); }


	protected:
	private:
		T				*_Array;
		unsigned int	_n;
};

#endif
