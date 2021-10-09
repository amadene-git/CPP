/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:35:52 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 16:45:47 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string str = "Bob";
	Zombie	*bob = newZombie(str);

	str.assign("Luc");

	std::cout << "str " + str << std::endl;
	std::cout << "Bob getter->" + bob->getter() << std::endl;
	std::cout << "Bob announce->";
	bob->announce();

	std::cout << std::endl << "randomChump featuring Wejden->";
	randomChump("Wejden");


	std::cout << std::endl << "delete bob->";
	delete bob;
}
