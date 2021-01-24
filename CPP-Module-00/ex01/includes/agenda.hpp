/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <nani@??????.???>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:56:30 by corozco           #+#    #+#             */
/*   Updated: 2020/12/13 02:33:33 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AGENDA_HPP
# define AGENDA_HPP

# include "phone.hpp"

class Agenda
{
	public:
	Agenda();
	void		searchContact();
	void		printDb() const;
	void		ifTen(std::string str) const;
	void		addContact();
	std::string	checkline(std::string _var);

	private:
	Contact		m_people[8];
	int			m_index;

};

#endif
