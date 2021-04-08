#include "span.hpp"

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span & obj)
{
	*this = obj;
}

Span& Span::operator=(const Span & obj)
{
	this->_n = obj._n;
	this->_tab = obj._tab;

	return (*this);
}

Span::~Span()
{
	this->_tab.clear();
}

void	Span::addNumber(int number)
{
	if (this->_n > 0)
		this->_tab.push_back(number);
	else
		throw std::exception();
	this->_n--;
}
/*
int Span::shortestSpan() const
{

}

int Span::longestSpan() const
{
}
*/
