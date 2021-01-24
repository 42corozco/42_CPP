/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:43:38 by corozco           #+#    #+#             */
/*   Updated: 2021/01/23 16:09:19 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*
** m_fixed = obj.m_fixed;
** m_fixed = obj.getRawBits();
*/

Fixed::Fixed( Fixed const & obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->m_fixed);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	m_fixed = raw;
}
