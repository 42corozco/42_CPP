/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:43:42 by corozco           #+#    #+#             */
/*   Updated: 2021/01/24 10:41:20 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class		Fixed
{
	public:
	Fixed();
	Fixed( Fixed const& obj );
	Fixed & operator=( Fixed const & rhs );
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	private:
	int					m_fixed;
	const static int	m_bits = 8;
};

#endif
