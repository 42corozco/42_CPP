/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:59 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:53:00 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string str)
{
	m_type = str;
}

const std::string	&Weapon::getType()
{
	return(m_type);
}

void				Weapon::setType(std::string str)
{
	m_type = str;
}
