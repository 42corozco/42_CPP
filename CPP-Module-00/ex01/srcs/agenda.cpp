/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <nani@??????.???>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:56:57 by corozco           #+#    #+#             */
/*   Updated: 2020/12/13 02:33:39 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"
#include <iomanip>

Agenda::Agenda()
{
	m_index = 0;
}

void	Agenda::ifTen(std::string str) const
{
	if (str.size() > 10)
		std::cout << str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

void	Agenda::printDb() const
{
	int	i(0);
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|     Login|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < m_index && m_index <= MAX_PEOPLE)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		ifTen(m_people[i].getFirstName());
		ifTen(m_people[i].getLastName());
		ifTen(m_people[i].getLogin());
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}
std::string	Agenda::checkline(std::string _var)
{
	std::string tmp;
	int			i;

	while (1)
	{
		std::cout << _var << ": ";
		std::getline(std::cin, tmp);
		i = 0;
		while (i < (int)tmp.size())
		{
			if (tmp[i] != ' ')
				break ;
			else if (i + 1 == (int)tmp.size())
			{
				i = -1;
				break ;
			}
			else
				i++;
		}
		if (tmp != "" && i != -1)
			return (tmp);
		std::cout << "\033[34m" << "Empty line" << "\033[39m"<< std::endl;
	}
}

void	Agenda::addContact()
{

	if (m_index == MAX_PEOPLE)
		std::cout << "\033[34m" << "The database does not support any more contacts." << "\033[39m"<< std::endl;
	else
	{
		std::cout << "\033[36m" << "Create Contact" << "\033[39m"<< std::endl;
		m_people[m_index].setFirstName(checkline(m_people[m_index].getFirstName()));
		m_people[m_index].setLastName(checkline(m_people[m_index].getLastName()));
		m_people[m_index].setNickname(checkline(m_people[m_index].getNickname()));
		m_people[m_index].setLogin(checkline(m_people[m_index].getLogin()));
		m_people[m_index].setPostalAddress(checkline(m_people[m_index].getPostalAddress()));
		m_people[m_index].setEmailAddress(checkline(m_people[m_index].getEmailAddress()));
		m_people[m_index].setPhoneNumber(checkline(m_people[m_index].getPhoneNumber()));
		m_people[m_index].setBirthdayDate(checkline(m_people[m_index].getBirthdayDate()));
		m_people[m_index].setFavoriteMeal(checkline(m_people[m_index].getFavoriteMeal()));
		m_people[m_index].setUnderwearColor(checkline(m_people[m_index].getUnderwearColor()));
		m_people[m_index].setDarkestSecret(checkline(m_people[m_index].getDarkestSecret()));
		std::cout << "\033[36m" << "Contact created" << "\033[39m"<< std::endl;
		m_index++;
	}
}

void	Agenda::searchContact()
{
	std::string	tmp;
	int			id;
	int			j;

	if (m_index == 0)
	{
		std::cout << "\033[31m" << "No Contacts" << "\033[39m"<< std::endl;
		return ;
	}
	printDb();
	while (1)
	{
		std::cout << "->	User ID: ";
		std::getline(std::cin, tmp);
		j = -1;
		while (++j < (int)tmp.size())
		{
			if (tmp[j] < '0' || tmp[j] > '9')
			{
				j = -2;
				std::cout << "\033[31m" << "Please enter a valid ID" << "\033[39m"<< std::endl;
				break ;
			}
		}
		if (j != -2)
		{
			id = std::atoi(tmp.c_str());
			if (id >= 0 && id < MAX_PEOPLE && id < m_index)
			{
				m_people[id].printContat();
				return ;
			}
			else
				std::cout << "\033[31m" << "Please enter a valid ID" << "\033[39m"<< std::endl;
		}
	}
}
