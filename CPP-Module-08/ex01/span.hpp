#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class Span
{
	public:
	Span(unsigned int n);
	Span(const Span & obj);
	Span& operator=(const Span & obj);
	~Span();

	Span(std::vector<int>);
	void	addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;

	/*++*/
	void	print_sp() const;
	unsigned int getSize() const;
	void	addRamdonNumber();

	protected:
	private:
	Span() {}
	unsigned int _n;
	std::vector<int> _tab;
};

#endif
