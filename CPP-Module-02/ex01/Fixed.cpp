/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:15:38 by corozco           #+#    #+#             */
/*   Updated: 2021/02/28 15:07:06 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int tmp )
{
	std::cout << "Int constructor called" << std::endl;
	this->m_fixed = tmp << this->m_bits;
}

Fixed::Fixed( const float tmp)
{
	std::cout << "Float constructor called" << std::endl;
	this->m_fixed = roundf(tmp * (1 << this->m_bits));
}

Fixed::Fixed( Fixed const & obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &	Fixed::operator=( Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->m_fixed = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	return (this->m_fixed);
}

void	Fixed::setRawBits( int raw )
{
	this->m_fixed = raw; 
}

float	Fixed::toFloat( void ) const
{
	return ( (float)this->m_fixed / (float)(1 << this->m_bits) );
}

int		Fixed::toInt( void ) const
{
	return ( (int)roundf(this->m_fixed >> this->m_bits) );
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return ( o );
}
