/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:11:24 by admadene          #+#    #+#             */
/*   Updated: 2021/11/15 13:59:46 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char ** av)
{
	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments\n";
		return (0);
	}

	std::ifstream	ifs;
	std::string		str;
	std::string		line;
	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string 	s2 = av[3];

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error: bad arguments\n";
		return (0);
	}

	ifs.open(filename);
	if (!ifs.is_open())
	{
		std::cout << "Error: can't open " << filename << std::endl;
		return (0);
	}
	while (!ifs.eof())
	{
		getline(ifs, line);
		if (!ifs.eof())
		{
			str.append(line);
			str.append("\n");	
		}
	}
	ifs.close();

	std::size_t	i = 0;
	std::ofstream ofs;

	while (i != std::string::npos)
	{
		i = str.find(s1, i);
		if (i != std::string::npos)
		{
			str.erase(i, s1.size());
			str.insert(i, s2);
			i += s2.size();
		}
		std::cout << i << std::endl;
	}
  	ofs.open (filename + ".replace", std::ofstream::out);
  	ofs << str;
  	ofs.close();
	
	return (0);
}
