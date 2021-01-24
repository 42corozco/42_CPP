/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:43 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:44 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wap):m_wap(wap)
{
	m_name = str;
}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with his " << m_wap.getType() << std::endl;
}
