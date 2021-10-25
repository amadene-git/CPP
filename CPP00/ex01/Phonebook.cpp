/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:13:09 by admadene          #+#    #+#             */
/*   Updated: 2021/10/25 21:14:26 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::print_contact(void)
{
	std::cout << "First name: " +  this->_first_name << std::endl;
	std::cout << "Last name: " +  this->_last_name << std::endl;
	std::cout << "Nickname: " +  this->_nickname << std::endl;
	std::cout << "Phone number: " +  this->_phone << std::endl;
	std::cout << "Darkest secret: " +  this->_secret << std::endl;
}

int		Contact::add_contact(int index)
{
	this->delete_contact();
	while (this->_first_name.empty())
	{
		std::cout << "First name:";
		if(getline(std::cin, this->_first_name).eof())
			return (0);
	}
	while (this->_last_name.empty())
	{
		std::cout << "Last name:";
		if(getline(std::cin, this->_last_name).eof())
			return (0);
	}
	while (this->_nickname.empty())
	{
		std::cout << "Nickname:";
		if(getline(std::cin, this->_nickname).eof())
			return (0);
	}
	while (this->_phone.empty())
	{
		std::cout << "Phone number:";
		if(getline(std::cin, this->_phone).eof())
			return (0);
	}
	while (this->_secret.empty())
	{
		std::cout << "Darkest secret:";
		if(getline(std::cin, this->_secret).eof())
			return (0);
	}
	this->_index = index;
	return (1);
}

void	Contact::delete_contact(void)
{
	this->_first_name.clear();
	this->_last_name.clear();
	this->_nickname.clear();
	this->_phone.clear();
	this->_secret.clear();
}

void	Contact::print_tronc(void)
{
	std::cout << "|         " << this->_index + 1 << "|";

	std::string tmp = this->_first_name;
	for (int i = 10; i > int(tmp.length()); i--)
		std::cout << " ";
	if (tmp.length() > 10)
		tmp.replace(9, 10, ".");
	std::cout << tmp.substr(0, 10) + "|";

	tmp = this->_last_name;
	for (int i = 10; i > int(tmp.length()); i--)
		std::cout << " ";
	if (tmp.length() > 10)
		tmp.replace(9, 10, ".");
	std::cout << tmp.substr(0, 10) + "|";

	tmp = this->_nickname;
	for (int i = 10; i > int(tmp.length()); i--)
		std::cout << " ";
	if (tmp.length() > 10)
		tmp.replace(9, 10, ".");
	std::cout << tmp.substr(0, 10) + "|" << std::endl;

}

int		Contact::is_empty(void)
{
	return (this->_first_name.empty());
}

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

Contact	*Phonebook::getter(void)
{
	return (this->_list);
}

int		Phonebook::search_contact(int i)
{
	int 		n = 0;
	std::string	line;

	if (i == 0)
		std::cout << "Phonebook is empty" << std::endl;
	else
	{
		std::cout << "|     index|first name| last name|  nickname|" << std::endl;
		while (n < i)
		{
			this->_list[n].print_tronc();	
			n++;
		}
		while (1)
		{
			std::cout << "index ?: ";
			if(getline(std::cin, line).eof())
				return (0);
			n = atoi(line.c_str());
			if (n >= 1 && n <= 8 && !this->_list[n - 1].is_empty())
			{
				this->_list[n - 1].print_contact();
				return (1);
			}
			std::cout << "nope !\n";
		}
	}
	return (1);
}
