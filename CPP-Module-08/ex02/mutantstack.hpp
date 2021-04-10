#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
	public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack<T> & obj) { *this = obj; }
	MutantStack& operator=(const MutantStack<T> & obj);
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}
	protected:
	private:
};

#endif
