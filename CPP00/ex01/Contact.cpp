/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 16:31:06 by admadene          #+#    #+#             */
/*   Updated: 2021/06/28 17:08:09 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void)
{
}

Contact::~Contact (void)
{
}

void	Contact::add_contact( void )
{
	this->delete_contact();
	while (this->_first_name.empty())
	{
		std::cout << "First name:";
		getline(std::cin, this->_first_name);
	}
	while (this->_last_name.empty())
	{
		std::cout << "Last name:";
		getline(std::cin, this->_last_name);
	}
	while (this->_nickname.empty())
	{
		std::cout << "Nickname:";
		getline(std::cin, this->_nickname);
	}
	while (this->_login.empty())
	{
		std::cout << "Login:";
		getline(std::cin, this->_login);
	}
	while (this->_address.empty())
	{
		std::cout << "adress:";
		getline(std::cin, this->_address);
	}
	while (this->_mail.empty())
	{
		std::cout << "mail:";
		getline(std::cin, this->_mail);
	}
	while (this->_phone.empty())
	{
		std::cout << "Phone number:";
		getline(std::cin, this->_phone);
	}
	while (this->_birthday.empty())
	{
		std::cout << "Birthday:";
		getline(std::cin, this->_birthday);
	}
	while (this->_meal.empty())
	{
		std::cout << "Favorite meal:";
		getline(std::cin, this->_meal);
	}
	while (this->_underwear.empty())
	{
		std::cout << "Underwear color:";
		getline(std::cin, this->_underwear);
	}
	while (this->_secret.empty())
	{
		std::cout << "Darkest secret:";
		getline(std::cin, this->_secret);
	}
}

void	Contact::search_contact(int i)
{
	std::cout << i << "         |";
	ft_print(this->_first_name);
	std::cout << "|";
	ft_print(this->_last_name);
	std::cout << "|";
	ft_print(this->_nickname);
	std::cout << std::endl;
}

void	Contact::print_contact(void)
{
	std::cout << "First name:" <<  this->_first_name << std::endl;
	std::cout << "Last name:" <<  this->_last_name << std::endl;
	std::cout << "Nickname:" <<  this->_nickname << std::endl;
	std::cout << "Login:" <<  this->_login << std::endl;
	std::cout << "adress:" <<  this->_address << std::endl;
	std::cout << "mail:" <<  this->_mail << std::endl;
	std::cout << "Phone number:" <<  this->_phone << std::endl;
	std::cout << "Birthday:" <<  this->_birthday << std::endl;
	std::cout << "Favorite meal:" <<  this->_meal << std::endl;
	std::cout << "Underwear color:" <<  this->_underwear << std::endl;
	std::cout << "Darkest secret:" <<  this->_secret << std::endl;
}

void	Contact::delete_contact(void)
{

	this->_first_name.clear();
	this->_last_name.clear();
	this->_nickname.clear();
	this->_login.clear();
	this->_address.clear();
	this->_mail.clear();
	this->_phone.clear();
	this->_birthday.clear();
	this->_meal.clear();
	this->_underwear.clear();
	this->_secret.clear();
}
