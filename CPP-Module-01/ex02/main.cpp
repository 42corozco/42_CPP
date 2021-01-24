/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:50:31 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:50:33 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent nani;
	Zombie *test;

	srand(time(NULL));
	nani.setZombieType("xelor");
	test = nani.randomChump();
	test->announce();
	delete test;
	nani.setZombieType("Yopuka");
	test = nani.randomChump();
	test->announce();
	delete test;
	return (0);
}
