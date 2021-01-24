/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <nani@??????.???>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 21:56:40 by corozco           #+#    #+#             */
/*   Updated: 2020/12/13 02:33:35 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "phone.hpp"

class Contact
{
	public:
	Contact();
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getLogin() const;
	std::string	getPostalAddress() const;
	std::string	getEmailAddress() const;
	std::string	getPhoneNumber() const;
	std::string	getBirthdayDate() const;
	std::string	getFavoriteMeal() const;
	std::string	getUnderwearColor() const;
	std::string	getDarkestSecret() const;
	void	setFirstName(std::string str);
	void	setLastName(std::string str);
	void	setNickname(std::string str);
	void	setLogin(std::string str);
	void	setPostalAddress(std::string str);
	void	setEmailAddress(std::string str);
	void	setPhoneNumber(std::string str);
	void	setBirthdayDate(std::string str);
	void	setFavoriteMeal(std::string str);
	void	setUnderwearColor(std::string str);
	void	setDarkestSecret(std::string str);
	void	printContat() const;

	private:
	// Attributs
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_login;
	std::string m_postalAddress;
	std::string m_emailAddress;
	std::string m_phoneNumber;
	std::string m_birthdayDate;
	std::string m_favoriteMeal;
	std::string m_underwearColor;
	std::string m_darkestSecret;
};

#endif
