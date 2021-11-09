/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:08:56 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 17:06:02 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_name)
{
	this->setType(type_name);
	std::cout << "Weapon constructor called for " << this->getType() << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor called for " << this->getType() << std::endl;
}

std::string const	&Weapon::getType(void)
{
	return (this->_type);
}


void	Weapon::setType(std::string type_name)
{
	this->_type = type_name;
}
