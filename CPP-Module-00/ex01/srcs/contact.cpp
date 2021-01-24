/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <nani@??????.???>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:57:03 by corozco           #+#    #+#             */
/*   Updated: 2020/12/13 02:33:43 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

Contact::Contact()
{
	m_firstName = "First name";
	m_lastName = "Last name";
	m_nickname = "Nickname";
	m_login = "Login";
	m_postalAddress = "Postal address";
	m_emailAddress = "Email address";
	m_phoneNumber = "Phone number";
	m_birthdayDate = "Birthday date";
	m_favoriteMeal = "Favorite meal";
	m_underwearColor = "Underwear Color";
	m_darkestSecret = "Darkest Secret";
}

std::string	Contact::getFirstName() const
{
	return m_firstName;
}

std::string	Contact::getLastName() const
{
	return m_lastName;
}

std::string	Contact::getNickname() const
{
	return m_nickname;
}

std::string	Contact::getLogin() const
{
	return m_login;
}

std::string	Contact::getPostalAddress() const
{
	return m_postalAddress;
}

std::string	Contact::getEmailAddress() const
{
	return m_emailAddress;
}

std::string	Contact::getPhoneNumber() const
{
	return m_phoneNumber;
}

std::string	Contact::getBirthdayDate() const
{
	return m_birthdayDate;
}

std::string	Contact::getFavoriteMeal() const
{
	return m_favoriteMeal;
}

std::string	Contact::getUnderwearColor() const
{
	return m_underwearColor;
}

std::string	Contact::getDarkestSecret() const
{
	return m_darkestSecret;
}

void		Contact::setFirstName(std::string str)
{
	m_firstName = str;
}

void		Contact::setLastName(std::string str)
{
	m_lastName = str;
}

void		Contact::setNickname(std::string str)
{
	m_nickname = str;
}

void		Contact::setLogin(std::string str)
{
	m_login = str;
}

void		Contact::setPostalAddress(std::string str)
{
	m_postalAddress = str;
}

void		Contact::setEmailAddress(std::string str)
{
	m_emailAddress = str;
}

void		Contact::setPhoneNumber(std::string str)
{
	m_phoneNumber = str;
}

void		Contact::setBirthdayDate(std::string str)
{
	m_birthdayDate = str;
}

void		Contact::setFavoriteMeal(std::string str)
{
	m_favoriteMeal = str;
}

void		Contact::setUnderwearColor(std::string str)
{
	m_underwearColor = str;
}

void		Contact::setDarkestSecret(std::string str)
{
	m_darkestSecret = str;
}

void	Contact::printContat() const
{
	std::cout << "First name: " << m_firstName << std::endl;
	std::cout << "Last name;: " << m_lastName << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Login: " << m_login << std::endl;
	std::cout << "Postal address: " << m_postalAddress << std::endl;
	std::cout << "Email address: " << m_emailAddress << std::endl;
	std::cout << "Phone number: " << m_phoneNumber << std::endl;
	std::cout << "Birthday date: " << m_birthdayDate << std::endl;
	std::cout << "Favorite meal: " << m_favoriteMeal << std::endl;
	std::cout << "Underwear color: " << m_underwearColor << std::endl;
	std::cout << "Darkest secret: " << m_darkestSecret << std::endl;
}
