#include "mutantstack.hpp"

template<class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &obj)
{
	this->c = obj.c;
	return (*this);
}
