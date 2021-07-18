/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:17:22 by admadene          #+#    #+#             */
/*   Updated: 2021/06/28 17:07:47 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <libc.h>

int	check_line(std::string line)
{
	if (!line.compare("ADD"))
		return (1);
	if (!line.compare("SEARCH"))
		return (2);
	if (!line.compare("EXIT"))
		return (0);
	return (-1);
}

void	ft_print(std::string str)
{
	int i;

	i = -1;
	while (++i < 9)
	{
		if (str[i])
		{
			std::cout << str[i];
		}
		else
			std::cout << " ";
	}
	if (str[i])
		std::cout << ".";
	else
		std::cout << " ";
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	std::string	line;
	Contact	repo[8];
	int i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (line.compare("EXIT"))
	{
		std::cout << "Please, enter command:";
		getline(std::cin, line);
		if (check_line(line) == -1)
		{
			std::cout << "Error !" << std::endl;
			continue;
		}
		else if (check_line(line) == 1)
		{
			if (i == 9)
			{
				i = 1;
				k = 1;
			}
			repo[i - 1].add_contact();
			i++;
		}
		else if (check_line(line) == 2)
		{
			j = 0;
			if (i > 1 || k)
			{
				std::cout << "index     |first name|last name |nickname  " << std::endl;
				if (k)
					while (++j <= 8)
						repo[j - 1].search_contact(j);
				else
					while (++j < i)
						repo[j - 1].search_contact(j);
				std::cout << "Please, enter index:";
				getline(std::cin, line);
				if ((atoi(line.c_str()) > 0 && atoi(line.c_str()) < i) || \
				(k && atoi(line.c_str()) > 0 && atoi(line.c_str()) < 9))
				{
					repo[atoi(line.c_str()) - 1].print_contact();
				}
				else
					std::cout << "bad index\n";
			}
			else
				std::cout << "PhoneBook is empty" << std::endl;
		}
		else if (check_line(line) == 0)
			std::cout << "EXIT" << std::endl;
	}
	return (0);
}
