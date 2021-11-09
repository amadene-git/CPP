/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:51:04 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 18:37:14 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 10;
	std::string name = "Jean-Jacques";
	int i = 0;
	std::cout << "zombieHorde(" << N << ", " + name + ")->\n";
	Zombie *horde = zombieHorde(N, name);
	while (i < N)
	{
		std::cout << "Zombie no." << i << " " << (horde + i) <<  " ->";
		(horde + i)->announce();
		i++;
	}
	std::cout << "delete [] horde->\n";
	delete [] horde;

	
	N = 1;
	name = "Georges";
	i = 0;
	std::cout << "\nzombieHorde(" << N << ", " + name + ")->\n";
	horde = zombieHorde(N, name);
	while (i < N)
	{
		std::cout << "Zombie no." << i << " " << (horde + i) << " ->";
		(horde + i)->announce();
		i++;
	}
	std::cout << "delete [] horde->\n";
	delete [] horde;
	
	
	
	N = 0;
	name = "Eugene";
	i = 0;
	std::cout << "\nzombieHorde(" << N << ", " + name + ")->\n";
	horde = zombieHorde(N, name);
	while (i < N)
	{
		std::cout << "Zombie no." << i << " " << (horde + i) << " ->";
		(horde + i)->announce();
		i++;
	}
	std::cout << name + " ->" << horde << std::endl;
	
	
	
	N = -1;
	name = "JuL";
	i = 0;
	std::cout << "\nzombieHorde(" << N << ", " + name + ")->\n";
	horde = zombieHorde(N, name);
	while (i < N)
	{
		std::cout << "Zombie no." << i << " " << (horde + 1) <<" ->";
		(horde + i)->announce();
		i++;
	}
	std::cout << name + " ->" << horde << std::endl;
	
	return (0);
}

