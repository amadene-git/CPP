/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:16 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:25:51 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << this << "*****FragTrap***** Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << this << "*****FragTrap***** Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
//Name(name), Hitpoints(100), Energy_points(100), Attack_damage(30)
{
	Name = name;
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << this << "*****FragTrap***** overload constructor called for " << this->Name << std::endl;
}

// FragTrap	&FragTrap::operator=(FragTrap const &rhs)
// {
// 	std::cout << "*****FragTrap***** Assignation overload called for " << this << std::endl;
// 	this->Energy_points = rhs.getEnergy_points();
// 	this->Hitpoints = rhs.getHitpoints();
// 	this->Attack_damage = rhs.getAttack_damage();
// 	return (*this);
// }

FragTrap::~FragTrap(void)
{
	std::cout << this << "*****FragTrap***** destructor called for " << this->Name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this << "*****FragTrap***** " << this->Name << " asks for a positive high fives !"<< std::endl;
}







