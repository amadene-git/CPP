/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:51:04 by admadene          #+#    #+#             */
/*   Updated: 2021/06/30 19:00:47 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *horde = zombieHorde(N, "Jean-Jacques");
	
	int i = 0;

	while (i < N)
	{
		(horde + i)->annonce();
		i++;
	}

	delete [] horde;
	return (0);
}

