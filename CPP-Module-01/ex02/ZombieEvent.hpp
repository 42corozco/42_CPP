/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:51:32 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:51:33 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CPP
# define ZOMBIEEVENT_CPP

# include "Zombie.hpp"

class ZombieEvent
{
	public:
	void setZombieType(std::string str);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();

	private:
	std::string m_type;
};

#endif
