/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:03 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:05 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CPP
# define ZOMBIE_CPP

# include <iostream>
# include <string>

class Zombie
{
	public:
	Zombie();
	Zombie(std::string name, std::string type);
	void announce();
	~Zombie();

	private:
	std::string m_name;
	std::string m_type;
};

#endif
