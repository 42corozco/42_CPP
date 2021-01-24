/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:00 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:01 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::string str[5] = {"Quimera", "Thomas", "Luna", "Bruno", "Manolo"};
	std::string scs[3] = {"healer", "warrior", "ninja"};

	m_name = str[rand() % 5];
	m_type = scs[rand() % 3];
}

Zombie::~Zombie()
{
	std::cout << "The Zombie " << m_name << " is Dead!" << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
	m_name = name;
	m_type = type;
}

void Zombie::announce()
{
	std::cout << "<" << m_name << " (" << m_type << ")" << ">"
	<< " Braiiiiiiinnnssss ..." << std::endl;
}
