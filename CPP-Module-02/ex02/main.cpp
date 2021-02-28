/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 10:45:13 by corozco           #+#    #+#             */
/*   Updated: 2021/02/28 15:01:41 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int				main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	Fixed x(10);
	Fixed y(10);

	std::cout << "\n\n----------------" << std::endl;
	std::cout << "X: " << x << " and Y: " << y << std::endl;
	std::cout << "x * y: " << (x * y) << std::endl;
	std::cout << "x / y: " << (x / y) << std::endl;
	std::cout << "x - y: " << (x - y) << std::endl;
	std::cout << "x + y: " << (x + y) << std::endl;
	std::cout << "x++ == ++y: " << (x++ == ++y) << std::endl;
	std::cout << "X: " << x << " and Y: " << y << std::endl;
	std::cout << "x == y: " << (x == y) << std::endl;
	std::cout << "X: " << x << " and Y: " << ++y << std::endl;
	std::cout << "x > y: " << (x > y) << std::endl;
	std::cout << "x < y: " << (x < y) << std::endl;
	std::cout << "x != y: " << (x != y) << std::endl;

	std::cout << "\n\n----------------" << std::endl;
	std::cout << "min(min(X, A), min(Y, B))" << std::endl;
	std::cout << "X: " << x << " and Y: " << y << std::endl;
	std::cout << "A: " << a << " and B: " << b << std::endl;
	std::cout << "min : " << (Fixed::min(Fixed::min(x, a),Fixed::min(y, b))) << std::endl;
	std::cout << "max(max(X, A), max(Y, B))" << std::endl;
	std::cout << "max : " << (Fixed::max(Fixed::max(x, a),Fixed::max(y, b))) << std::endl;
	std::cout << "max(min(X, A), min(Y, B))" << std::endl;
	std::cout << "max : " << (Fixed::max(Fixed::min(x, a),Fixed::min(y, b))) << std::endl;

	return 0;
}
