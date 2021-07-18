/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:11:24 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:38 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ifstream 	ifs("file");
	unsigned int 	dst;
	unsigned int	dst2;	
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;

	ifs.close();


	std::string str;
	std::ofstream	ofs("file");
	ofs.getline() >> str;
	ofs.close();

	std::cout << str << std::endl;

	return (0);
}
