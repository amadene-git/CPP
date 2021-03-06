/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:44:14 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 12:43:17 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap wesh("wesh");
	wesh.attack("yo");
	std::cout << wesh;
	wesh.takeDamage(2);
	std::cout << wesh;
	wesh.beRepaired(2);
	std::cout << wesh;
	wesh.takeDamage(13);
	std::cout << wesh;
	wesh.takeDamage(45);
	std::cout << wesh;
	
	ClapTrap yo(wesh);
	std::cout << yo;
	yo.beRepaired(10);
	std::cout << yo;
	wesh.takeDamage(4);
	std::cout << wesh;
	yo.takeDamage(6);
	std::cout << yo;
	
	
	yo = wesh;
	std::cout << wesh;
	std::cout << yo;
	return (0);
}
