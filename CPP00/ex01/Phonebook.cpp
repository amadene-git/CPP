/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:13:09 by admadene          #+#    #+#             */
/*   Updated: 2021/10/26 15:20:30 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}
std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}
std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}
std::string	Contact::get_phone(void)
{
	return (this->_phone);
}
std::string	Contact::get_secret(void)
{
	return (this->_secret);
}

void	Contact::set_first_name(std::string str)
{
	this->_first_name = str;
}
void	Contact::set_last_name(std::string str)
{
	this->_last_name = str;
}
void	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
}
void	Contact::set_phone(std::string str)
{
	this->_phone = str;
}
void	Contact::set_secret(std::string str)
{
	this->_secret = str;
}

void	Contact::set_index(int index)
{
	this->_index = index;
}

void	Contact::print_contact(void)
{
	std::cout << "First name: " +  this->_first_name << std::endl;
	std::cout << "Last name: " +  this->_last_name << std::endl;
	std::cout << "Nickname: " +  this->_nickname << std::endl;
	std::cout << "Phone number: " +  this->_phone << std::endl;
	std::cout << "Darkest secret: " +  this->_secret << std::endl;
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

int		Phonebook::add_contact(int index)
{
	std::string	line;

	this->_list[index].delete_contact();
	while (this->_list[index].get_first_name().empty())
	{
		std::cout << "First name:";
		if(getline(std::cin,line).eof())
			return (0);
		this->_list[index].set_first_name(line);
	}
	while (this->_list[index].get_last_name().empty())
	{
		std::cout << "Last name:";
		if(getline(std::cin,line).eof())
			return (0);
		this->_list[index].set_last_name(line);
	}
	while (this->_list[index].get_nickname().empty())
	{
		std::cout << "Nickname:";
		if(getline(std::cin,line).eof())
			return (0);
		this->_list[index].set_nickname(line);
	}
	while (this->_list[index].get_phone().empty())
	{
		std::cout << "Phone number:";
		if(getline(std::cin,line).eof())
			return (0);
		this->_list[index].set_phone(line);
	}
	while (this->_list[index].get_secret().empty())
	{
		std::cout << "Darkest secret:";
		if(getline(std::cin,line).eof())
			return (0);
		this->_list[index].set_secret(line);
	}
	this->_list[index].set_index(index);
	return (1);
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
