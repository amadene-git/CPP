/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:17:57 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:26:44 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap *ptr = new ScavTrap("ptr");
	std::cout << std::endl;
	delete ptr;
	std::cout << std::endl;

	ScavTrap	JeanMichel("Jean Michel");
	JeanMichel.attack("Jean Francois");
	JeanMichel.takeDamage(10);
	JeanMichel.beRepaired(3);
	std::cout << JeanMichel << std::endl;

	std::cout << std::endl;
	
	ScavTrap Sasuke("Sasuke");
	std::cout << Sasuke << std::endl;
	Sasuke.guardGate();
	std::cout << JeanMichel << std::endl;
	std::cout << Sasuke << std::endl;
	Sasuke = JeanMichel;
	std::cout << JeanMichel << std::endl;
	std::cout << Sasuke << std::endl;

	std::cout << std::endl;
	
	ScavTrap goku(Sasuke);
	std::cout << goku << std::endl;

	
	std::cout << std::endl;


	ClapTrap	Naruto("Naruto");
	Naruto.attack("Jean Francois");
	Naruto.takeDamage(10);
	Naruto.beRepaired(3);
	std::cout << Naruto << std::endl;

	std::cout << std::endl;

	
//	Naruto.guardGate();
//	Sasuke = Naruto;
//	std::cout << JeanMichel._name << std::endl;


	return (0);



}
