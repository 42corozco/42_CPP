#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
	Span(unsigned int n);
	Span(const Span & obj);
	Span& operator=(const Span & obj);
	~Span();

	void	addNumber(int number);
//	int shortestSpan() const;
//	int longestSpan() const;

	std::vector<int> _tab;
	protected:
	private:
	Span() {}
	unsigned int _n;
};

#endif
