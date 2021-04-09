#include "span.hpp"
#include <cmath>

Span::Span(unsigned int n) : _n(n)
{
	this->_tab.reserve(n);
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
		throw std::length_error("Error: Not allowed");
	this->_n--;
}

int Span::shortestSpan() const
{
	if (this->_tab.size() < 2)
		throw std::length_error("Error: missing numbers in array");
	int		tmp_min;
	int		tmp;

	for (unsigned int i = 0 ; i < this->_tab.size() - 1; i++)
	{
		tmp = abs(this->_tab[i] - this->_tab[i + 1]);
		if (i == 0)
			tmp_min = tmp;
		else
			tmp_min = (tmp < tmp_min) ? tmp : tmp_min;
	}
	return (tmp_min);
}


int Span::longestSpan() const
{
	if (this->_tab.size() < 2)
		throw std::length_error("Error: missing numbers in array");

	int		tmp_max(0);
	int		tmp;

	for (unsigned int i = 0 ; i < this->_tab.size() - 1; i++)
	{
		tmp = abs(this->_tab[i] - this->_tab[i + 1]);
		tmp_max = (tmp > tmp_max) ? tmp : tmp_max;
	}
	return (tmp_max);
}

void	Span::print_sp() const
{
	for (unsigned int i = 0; i < this->_tab.size() ; i++)
		std::cout << "[" << i <<  "]: " << this->_tab[i] << std::endl;
}

unsigned int Span::getSize() const
{
	return (this->_tab.size());
}
