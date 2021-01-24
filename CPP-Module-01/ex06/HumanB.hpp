/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:52:53 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 14:52:54 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{

	public:
	HumanB(std::string str);
	void		attack();
	void		setWeapon(Weapon &wea);
	private:
	Weapon		*m_wap;
	std::string	m_name;
};

#endif
