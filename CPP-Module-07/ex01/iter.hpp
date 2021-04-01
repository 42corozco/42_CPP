#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template < typename T>
void	iter( T * tab, T const & i, void f(T const &tab) )
{
	for (int k = 0; k < i; k++)
		f(tab[k]);
}

template < typename T>
void	shout( T const & n)
{
	std::cout << n << std::endl;
}

#endif
