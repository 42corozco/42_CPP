/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:19:28 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 12:19:29 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony()
{
	std::cout << "The Pony " << m_name << " is free" << std::endl;
}

void		Pony::setName(std::string str)
{
	m_name = str;
}

void		Pony::setAge(std::string str)
{
	m_age = str;
}

void		Pony::setColor(std::string str)
{
	m_color = str;
}

std::string	Pony::getName() const
{
	return (m_name);
}

std::string	Pony::getAge() const
{
	return (m_age);
}

std::string	Pony::getColor() const
{
	return (m_color);
}

void		Pony::run(std::string str) const
{
	std::cout << "\t" << str << " runs" << std::endl;
}

void		Pony::eat() const
{
	std::cout << "\t" << m_name << " eats" << std::endl;
}
