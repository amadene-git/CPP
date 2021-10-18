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
#include "ScravTrap.hpp"

int main()
{
	ScravTrap	JeanMichel("Jean Michel");
	JeanMichel.attack("Jean Francois");
	JeanMichel.takeDamage(10);
	JeanMichel.beRepaired(3);

	std::cout << std::endl;
	
	ScravTrap Sasuke("Sasuke");
	Sasuke.guardGate();
	Sasuke = JeanMichel;

	std::cout << std::endl;

	ClapTrap	Naruto("Naruto");
	Naruto.attack("Jean Francois");
	Naruto.takeDamage(10);
	Naruto.beRepaired(3);

	std::cout << std::endl;

	
//	Naruto.guardGate();
//	Sasuke = Naruto;
//	std::cout << JeanMichel._name << std::endl;


	return (0);



}
