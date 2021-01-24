/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:16:39 by corozco           #+#    #+#             */
/*   Updated: 2021/01/24 14:03:15 by corozco          ###   ########.fr       */
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
	/*Canonical form*/
	Fixed();
	Fixed( const int tmp );
	Fixed( const float tmp );
	Fixed( Fixed const & obj );
	~Fixed();
	Fixed&	operator=( Fixed const & rhs );

	/*fonctions*/
	int		getRawBits() const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	/*comparison operators*/
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	/*arithmetic operators:*/
	Fixed	operator+( const Fixed & rhs );
	Fixed	operator-( const Fixed & rhs );
	Fixed	operator*( const Fixed & rhs );
	Fixed	operator/( const Fixed & rhs );

	/*increment/decrement operators*/
	Fixed&	operator++(); //Prefix increment operator.
	Fixed	operator++( int ); //Postfix increment operator.
	Fixed&	operator--();
	Fixed	operator--( int );

	/*non-member min and max*/
	static Fixed&		min( Fixed & rhs, Fixed & rhs2 );
	static const Fixed&	min( Fixed const & rhs, Fixed const & rhs2 );
	static Fixed&		max( Fixed & rhs, Fixed & rhs2 );
	static const Fixed&	max( Fixed const & rhs, Fixed const & rhs2 );

	private:
	int					m_fixed;
	const static int	m_bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
