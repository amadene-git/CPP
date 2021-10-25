/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:00:21 by admadene          #+#    #+#             */
/*   Updated: 2021/10/25 21:15:57 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	std::string line;
	Phonebook 	lol;
	Contact		*list = lol.getter();
	int i = 0;

	while (line.compare("EXIT"))
	{
		std::cout << "Please, enter command:";
		if(getline(std::cin, line).eof())
			return (0);
		if (!line.compare("ADD"))
		{
			if(!list[i % 8].add_contact(i % 8))
				return (0);
			i++;
		}			
		else if (!line.compare("SEARCH"))
		{
			if (!lol.search_contact((i > 8) ? 8 : i))
				return (0);
		}
		else if (line.compare("EXIT"))
			std::cout << "nope !" << std::endl;
	}
	return (0);
}
