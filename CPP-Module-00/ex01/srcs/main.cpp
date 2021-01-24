/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <nani@??????.???>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:57:09 by corozco           #+#    #+#             */
/*   Updated: 2020/12/13 02:33:46 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void			menu(void)
{
	std::cout <<"Menu" << std::endl;
	std::cout << "1 -> ADD" << std::endl;
	std::cout << "1 -> SEARCH" << std::endl;
	std::cout << "1 -> EXIT" << std::endl;
}

int				main(void)
{
	std::string	cmd;
	Agenda		agen;
	
	std::cout << "\033[36m" <<"	Welcome to Quimeraphone" << "\033[39m"<< std::endl;
	menu();
	while (1)
	{
		std::cout << "\033[33m" <<"🐰 Quimeraphone 🐰: " << "\033[39m";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "SEARCH")
			agen.searchContact();
		else if (cmd == "ADD")
			agen.addContact();
		else
			std::cout << "\033[31m" <<"Command not found" << "\033[39m"<< std::endl;
	}
	return (0);
}
