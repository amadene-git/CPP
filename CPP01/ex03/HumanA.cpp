/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:39:07 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 17:38:21 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponref) : _weapon(weaponref)
{
	this->_name = name;
	std::cout << "HumanA constructor called for " << this->_name << " with his " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor called for " << this->_name << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}


