#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
	Span(unsigned int n);
	void	addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;

	protected:
	private:
	Span();
	unsigned int _n;
	std::vector<int> tab;
};

#endif
