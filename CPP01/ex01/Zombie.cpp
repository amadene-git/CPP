/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:42:12 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 17:20:24 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie constructor called\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is died :( ->" << this << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setter(std::string name)
{
	this->_name.assign(name);
}

std::string	Zombie::getter(void)
{
	return (this->_name);
}
