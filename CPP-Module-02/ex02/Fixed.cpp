/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:15:38 by corozco           #+#    #+#             */
/*   Updated: 2021/01/24 12:22:27 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-----Canonical form------*/
Fixed::Fixed() : m_fixed(0)
{
}

Fixed::Fixed( const int tmp )
{
	this->m_fixed = tmp << this->m_bits;
}

Fixed::Fixed( const float tmp)
{
	this->m_fixed = round(tmp * (1 << this->m_bits));
}

Fixed::Fixed( Fixed const & obj )
{
	*this = obj;
}

Fixed::~Fixed()
{
}

Fixed &	Fixed::operator=( Fixed const & rhs)
{
	this->m_fixed = rhs.getRawBits();
	return *this;
}

/*---getters and setters---*/
int		Fixed::getRawBits( void ) const
{
	return (this->m_fixed);
}

void	Fixed::setRawBits( int raw )
{
	this->m_fixed = raw; 
}

/*---fonctions---*/
float	Fixed::toFloat( void ) const
{
	return ( (float)this->m_fixed / (float)(1 << this->m_bits) );
}

int		Fixed::toInt( void ) const
{
	return ( (int)round(this->m_fixed >> this->m_bits) );
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return ( o );
}

/*---Comparison operators:---*/
bool	Fixed::operator<( Fixed const & rhs ) const
{
	return ( this->m_fixed < rhs.m_fixed );
}

bool	Fixed::operator>( Fixed const & rhs ) const
{
	return ( this->m_fixed > rhs.m_fixed );
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	return ( this->m_fixed == rhs.m_fixed );
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	return ( this->m_fixed >= rhs.m_fixed );
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	return ( this->m_fixed <= rhs.m_fixed );
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	return ( this->m_fixed != rhs.m_fixed );
}

/*---arithmetic operators:---*/
Fixed	Fixed::operator+( const Fixed & rhs )
{
	Fixed tmp;

	tmp = rhs.toFloat() + this->toFloat();
	return ( tmp );
}

Fixed	Fixed::operator-( const Fixed & rhs )
{
	Fixed tmp;

	tmp = this->toFloat() - rhs.toFloat();
	return ( tmp );
}

Fixed	Fixed::operator*( const Fixed & rhs )
{
	Fixed tmp;

	tmp = this->toFloat() * rhs.toFloat();
	return ( tmp );
}

Fixed	Fixed::operator/( const Fixed & rhs )
{
	Fixed tmp;

	tmp = this->toFloat() / rhs.toFloat();
	return ( tmp );
}

Fixed&	Fixed::operator++()
{
	this->m_fixed++;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp = *this;

	++*this;
	return ( tmp );
}

Fixed&	Fixed::operator--()
{
	this->m_fixed--;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp = *this;

	--*this;
	return ( tmp );
}

Fixed&	Fixed::min( Fixed & rhs, Fixed & rhs2 )
{
	return (rhs < rhs2 ? rhs : rhs2 );
}

const Fixed&	Fixed::min( const Fixed & rhs, Fixed const & rhs2 )
{
	return (rhs < rhs2 ? rhs : rhs2 );
}

Fixed&			Fixed::max( Fixed & rhs, Fixed & rhs2 )
{
	return (rhs > rhs2 ? rhs : rhs2 );
}

const Fixed&	Fixed::max( Fixed const & rhs, Fixed const & rhs2 )
{
	return (rhs > rhs2 ? rhs : rhs2 );
}
