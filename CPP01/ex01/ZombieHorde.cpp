/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:52:21 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 17:09:34 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if (N < 1)
		return (NULL);
	
	Zombie*	horde = new Zombie[N];
	int i = 0;

	while (i < N)
	{
		(horde + i)->setter(name);
		i++;
	}
	return (horde);
}
