/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:35:37 by corozco           #+#    #+#             */
/*   Updated: 2021/03/02 11:35:39 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap frag1;
	FragTrap frag2("Quimera");

	srand(time(NULL));
	frag2.rangedAttack(frag1.getName());
	frag1.takeDAmage(frag2.getRangedDmg());
	frag1.meleeAttack(frag2.getName());
	frag2.takeDAmage(frag1.getMeleeDmg());
	frag1.beRepaired(100);
	frag2.beRepaired(100);
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag2.takeDAmage(frag1.getDmg());
	frag2.vaulthunter_dot_exe(frag1.getName());
	frag1.takeDAmage(frag2.getDmg());
	return (0);
}
