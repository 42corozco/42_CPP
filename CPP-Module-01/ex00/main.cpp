/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:19:19 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 12:19:21 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheStack(void)
{
	Pony	pony1;

	pony1.setName("Quimera");
	pony1.setAge("2");
	pony1.setColor("Black");
	std::cout << "\033[33m" << "Pony on the Slack->" << "\033[39m" << std::endl;
	std::cout << "\tName: " << pony1.getName() << std::endl;
	std::cout << "\tAge: " << pony1.getAge() << std::endl;
	std::cout << "\tColor: " << pony1.getColor() << std::endl;
	pony1.run(pony1.getName());
	pony1.eat();
}

void		ponyOnTheHeap(void)
{
	Pony	*pony2;

	pony2 = new Pony;
	pony2->setName("Coco");
	pony2->setAge("5");
	pony2->setColor("brwon");
	std::cout << "\033[33m" << "Pony on the Slack->" << "\033[39m" << std::endl;
	std::cout << "\tName: " << pony2->getName() << std::endl;
	std::cout << "\tAge: " << pony2->getAge() << std::endl;
	std::cout << "\tColor: " << pony2->getColor() << std::endl;
	pony2->eat();
	pony2->run(pony2->getName());
	delete pony2;
}

int			main(void)
{
	std::cout << "Welcome\n" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();
	std::cout << "\nBye" << std::endl;
	return (0);
}
