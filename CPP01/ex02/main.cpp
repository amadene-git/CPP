/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 19:03:32 by admadene          #+#    #+#             */
/*   Updated: 2021/06/30 19:14:36 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str;

	str.assign("HI THIS IS BRAIN");

	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address :" << std::endl;
	std::cout << "STR :" << &str << std::endl;
	std::cout << "PTR :" << stringPTR << std::endl;
	std::cout << "REF :" << &stringREF << std::endl;


	std::cout << "Content :" << std::endl;
	std::cout << "PTR: " << *stringPTR << std::endl;
	std::cout << "REF: " << stringREF << std::endl;
	return (0);
}
