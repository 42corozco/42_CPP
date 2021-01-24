/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:17 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:18 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p;
	std::string &ref(str);

	p = &str;

	std::cout << "Display using pointer" << std::endl;
	std::cout << *p << std::endl;
	std::cout << "Display using reference" << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
