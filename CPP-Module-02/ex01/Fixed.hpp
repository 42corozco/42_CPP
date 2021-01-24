/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:16:39 by corozco           #+#    #+#             */
/*   Updated: 2021/01/24 10:41:50 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class		Fixed
{
	public:
	Fixed();
	Fixed( const int tmp );
	Fixed( const float tmp );
	Fixed & operator=( Fixed const & rhs );
	Fixed( Fixed const & obj );
	~Fixed();

	int		getRawBits() const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	private:
	int					m_fixed;
	const static int	m_bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
