/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:16 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:25:51 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//SCAVTRAP CLASS
ScavTrap::ScavTrap(void)
{
	std::cout << this << "*****ScavTrap**** Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap::ClapTrap(src)
{
	std::cout << this << "*****ScavTrap**** Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap::ClapTrap(name)
{
	this->Hitpoints = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << this << "*****ScavTrap**** overload constructor called for " << this->Name << std::endl;
}

// ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
// {
// 	std::cout << "*****ScavTrap***** Assignation overload called for " << this << std::endl;
// 	this->Energy_points = rhs.getEnergy_points();
// 	this->Hitpoints = rhs.getHitpoints();
// 	this->Attack_damage = rhs.getAttack_damage();
// 	return (*this);
// }

ScavTrap::~ScavTrap(void)
{
	std::cout << this << "*****ScavTrap**** destructor called for " << this->Name << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
	std::cout << this << "*****ScavTrap**** "<<this->Name<<" attack "<<target<<", causing "<<this->Attack_damage<<" points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this << "*****ScavTrap**** " << this->Name << " has entered in Gatekeeper mode !"<< std::endl;
}







