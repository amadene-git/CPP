/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:44:14 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 18:45:43 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap wesh("wesh");
	wesh.attack("yo");
	wesh.takeDamage(2);
	wesh.beRepaired(2);
	wesh.takeDamage(13)
	return (0);
}
