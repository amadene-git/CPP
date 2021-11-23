/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:17:57 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 15:54:46 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Goku("Son Goku");
	std::cout << Goku << std::endl;

	Goku.takeDamage(10);
	std::cout << Goku << std::endl;

	return (0);



}
