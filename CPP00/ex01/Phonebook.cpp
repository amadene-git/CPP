/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:13:09 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 15:24:41 by admadene         ###   ########.fr       */
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
	std::cout << "First name: " +  this->first_name << std::endl;
	std::cout << "Last name: " +  this->last_name << std::endl;
	std::cout << "Nickname: " +  this->nickname << std::endl;
	std::cout << "Login: " +  this->login << std::endl;
	std::cout << "adress: " +  this->address << std::endl;
	std::cout << "mail: " +  this->mail << std::endl;
	std::cout << "Phone number: " +  this->phone << std::endl;
	std::cout << "Birthday: " +  this->birthday << std::endl;
	std::cout << "Favorite meal: " +  this->meal << std::endl;
	std::cout << "Underwear color: " +  this->underwear << std::endl;
	std::cout << "Darkest secret: " +  this->secret << std::endl;
}

void	Contact::add_contact(int index)
{
	this->delete_contact();
	while (this->first_name.empty())
	{
		std::cout << "First name:";
		getline(std::cin, this->first_name);
	}
	while (this->last_name.empty())
	{
		std::cout << "Last name:";
		getline(std::cin, this->last_name);
	}
	while (this->nickname.empty())
	{
		std::cout << "Nickname:";
		getline(std::cin, this->nickname);
	}
	while (this->login.empty())
	{
		std::cout << "Login:";
		getline(std::cin, this->login);
	}
	while (this->address.empty())
	{
		std::cout << "adress:";
		getline(std::cin, this->address);
	}
	while (this->mail.empty())
	{
		std::cout << "mail:";
		getline(std::cin, this->mail);
	}
	while (this->phone.empty())
	{
		std::cout << "Phone number:";
		getline(std::cin, this->phone);
	}
	while (this->birthday.empty())
	{
		std::cout << "Birthday:";
		getline(std::cin, this->birthday);
	}
	while (this->meal.empty())
	{
		std::cout << "Favorite meal:";
		getline(std::cin, this->meal);
	}
	while (this->underwear.empty())
	{
		std::cout << "Underwear color:";
		getline(std::cin, this->underwear);
	}
	while (this->secret.empty())
	{
		std::cout << "Darkest secret:";
		getline(std::cin, this->secret);
	}
	this->index = index;
}

void	Contact::delete_contact(void)
{
	this->first_name.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->login.clear();
	this->address.clear();
	this->mail.clear();
	this->phone.clear();
	this->birthday.clear();
	this->meal.clear();
	this->underwear.clear();
	this->secret.clear();
}

void	Contact::print_tronc(void)
{
	std::cout << "|         " << this->index + 1 << "|";

	for (int i = 10; i > int(this->first_name.length()); i--)
		std::cout << " ";
	if (this->first_name.length() > 10)
		this->first_name.replace(9, 10, ".");
	std::cout << this->first_name.substr(0, 10) + "|";


	for (int i = 10; i > int(this->last_name.length()); i--)
		std::cout << " ";
	if (this->last_name.length() > 10)
		this->last_name.replace(9, 10, ".");
	std::cout << this->last_name.substr(0, 10) + "|";


	for (int i = 10; i > int(this->nickname.length()); i--)
		std::cout << " ";
	if (this->nickname.length() > 10)
		this->nickname.replace(9, 10, ".");
	std::cout << this->nickname.substr(0, 10) + "|" << std::endl;

}

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::search_contact(int i)
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
			this->list[n].print_tronc();	
			n++;
		}
		while (1)
		{
			std::cout << "index ?: ";
			getline(std::cin, line);
			n = atoi(line.c_str());
			if (n >= 1 && n <= 8 && !this->list[n - 1].first_name.empty())
			{
				this->list[n - 1].print_contact();
				return ;
			}
			std::cout << "nope !\n";
		}
	}
}
