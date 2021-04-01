#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template < typename T, typename Ti>
void	iter( T * tab, Ti const & i, void f(T const &tab) )
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
