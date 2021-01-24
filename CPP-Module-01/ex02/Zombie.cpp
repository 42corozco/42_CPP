/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:50:35 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:50:36 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name, std::string type)
{
	m_name = name;
	m_type = type;
}

Zombie::~Zombie()
{
	std::cout << "The Zombie " << m_name << " is Dead!" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << m_name << " (" << m_type << ")" << ">"
	<< " Braiiiiiiinnnssss ..." << std::endl;
}
