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
	wesh.takeDamage(2);
	wesh.beRepaired(2);
	wesh.takeDamage(13);
	wesh.takeDamage(45);
	
	ClapTrap yo(wesh);
	yo.beRepaired(10);
	wesh.takeDamage(4);
	yo.takeDamage(6);
	return (0);
}
