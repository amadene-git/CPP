/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:00:21 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 16:02:10 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


int main(void)
{
	std::string line;
	Phonebook lol;
	int i = 0;
	
	while (line.compare("EXIT"))
	{
		std::cout << "Please, enter command:";
		getline(std::cin, line);
		
		if (!line.compare("ADD"))
		{
			lol.list[i % 8].add_contact(i % 8);
			i++;
		}			
		else if (!line.compare("SEARCH"))
			lol.search_contact((i > 8) ? 8 : i);
		else if (line.compare("EXIT"))
			std::cout << "nope !" << std::endl;
	}

	return (0);
}
