/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:31 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:32 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

std::string Human::identify() const
{
	return (m_br.identify());
}

const Brain &Human::getBrain()
{
	return (m_br);
}
