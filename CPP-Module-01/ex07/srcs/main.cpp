/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:53:08 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:53:09 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream my_file(av[1]);
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string line;
		std::stringstream fname;

		if (s1 == "\0" || s2 == "\0")
		{
			std::cout << "Error, invalid s1 or s2 (empty)" << std::endl;
			return (1);
		}
		fname << av[1] << ".replace" ;
		if (my_file.good())
		{
			std::ofstream new_file(fname.str());
			while (std::getline(my_file, line))
			{
				std::string::size_type pos = line.find(s1);
				while (pos != std::string::npos)
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					pos = line.find(s1, pos + s2.length());
				}
				new_file << line << std::endl;
			}
		}
		else
			std::cout << "Error: Unable to open file." << std::endl;
	}
	return (0);
}
