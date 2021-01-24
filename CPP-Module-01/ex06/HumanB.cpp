/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:49 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:50 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	m_name = str;
}

void	HumanB::setWeapon(Weapon &wea)
{
	m_wap = &wea;
}

void	HumanB::attack()
{
	std::cout << m_name << " attacks with his " << m_wap->getType() << std::endl;
}

