/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <nani@??????.???>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:56:18 by corozco           #+#    #+#             */
/*   Updated: 2020/12/13 02:33:22 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int i(0);

	if (ac > 1)
	{
		while (av[++i])
		{
			for (int j = 0; av[i][j]; j++)
				av[i][j] = std :: toupper(av[i][j]);
			std :: cout << av[i];
		}
		std :: cout << std :: endl;
	}
	else
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	return (0);
}
