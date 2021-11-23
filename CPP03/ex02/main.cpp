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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap	JeanMichel("Jean Michel");
	JeanMichel.attack("Jean Francois");
	JeanMichel.takeDamage(10);
	JeanMichel.beRepaired(3);

	std::cout << std::endl;
	std::cout << JeanMichel << std::endl;

	std::cout << std::endl;
	
	FragTrap Sasuke("Sasuke");
	Sasuke.highFivesGuys();

	std::cout << std::endl;
	std::cout << Sasuke << std::endl;
	std::cout << std::endl;
	
	Sasuke = JeanMichel;

	std::cout << JeanMichel << std::endl;
	std::cout << Sasuke << std::endl;

	std::cout << std::endl;

	ClapTrap	Naruto("Naruto");
	Naruto.attack("Jean Francois");
	Naruto.takeDamage(10);
	Naruto.beRepaired(3);
	std::cout << Naruto << std::endl;

	std::cout << std::endl;

	Naruto = Sasuke;


	std::cout << std::endl;

	std::cout << Naruto << std::endl;
	std::cout << Sasuke << std::endl;



//	Naruto.guardGate();
//	Sasuke = Naruto;


	return (0);



}
