/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:51:27 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:51:28 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>
#include <cstdlib>

void ZombieEvent::setZombieType(std::string str)
{
	m_type = str;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, m_type));
}

Zombie *ZombieEvent::randomChump()
{
	std::string str[5] = {"Quimera", "Thomas", "Luna", "Bruno", "Manolo"}; 
	Zombie *zom;

	zom = newZombie(str[rand() % 5]);
	return (zom);
}
