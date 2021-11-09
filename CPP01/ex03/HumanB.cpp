/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:24:59 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 17:37:45 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << "HumanB constructor called for " << this->_name << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor called for " << this->_name << std::endl;
}

void	HumanB::setWeapon(Weapon& weaponref)
{
	this->_weapon = &weaponref;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
