/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:07 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:08 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <cstdio>
#include <ctime>

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));
	horde = new Zombie[n];
	m_zombies = n;
}

void	ZombieHorde::announce() const
{
	int i(0);

	while (i < m_zombies)
		horde[i++].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}
