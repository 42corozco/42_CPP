/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corozco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 12:19:32 by corozco           #+#    #+#             */
/*   Updated: 2021/01/06 12:19:34 by corozco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

/*
** the destructor "~Pony": this is a method called automatically
** when an object is destroyed.
** For example at the end of the function in which it was declared or,
** if the object has been allocated dynamically with  new, during a delete
*/

class			Pony
{
	public:
	void		setName(std::string str);
	void		setAge(std::string str);
	void		setColor(std::string str);
	std::string	getName() const;
	std::string	getAge() const;
	std::string	getColor() const;
	void		run(std::string str) const;
	void		eat() const;
	~Pony();

	private:
	std::string	m_name;
	std::string	m_age;
	std::string	m_color;
};

#endif
