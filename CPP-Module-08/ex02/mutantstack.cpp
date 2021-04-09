#include "mutantstack.hpp"

MutantStack::MutantStack()
{
}

MutantStack::MutantStack(const MutantStack & obj)
{
	*this = obj;
}

MutantStack& MutantStack::operator=(const MutantStack & obj)
{
	return (*this);
}

MutantStack::~MutantStack()
{
}
