/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:16 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 15:29:43 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//SCRAVTRAP CLASS
DiamondTrap::DiamondTrap(void)
{
	std::cout << this << "*****DiamondTrap***** Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << this << "*****DiamondTrap***** Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	this->_name = name;
	std::cout << this->_attack_damage << std::endl;
	std::cout << this << "*****DiamondTrap***** overload constructor called for " << this->_name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this << "*****DiamondTrap***** destructor called for " << this->_name << std::endl;
}

/*
void    DiamondTrap::attack(std::string const & target)
{
	std::cout << this << "*****DiamondTrap***** "<<this->_name<<" attack "<<target<<", causing "<<this->_attack_damage<<" points of damage!" << std::endl;
}

void    DiamondTrap::takeDamage(unsigned int amount)
{
	this->_hit_points = this->_hit_points - amount;
	std::cout << this << "*****DiamondTrap****** "<<this->_name<<" takes "<<amount<<" points of damage! He has "<<this->_hit_points.getter()<<" Hitpoints left." << std::endl;
}

void    DiamondTrap::beRepaired(unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this << "*****DiamondTrap****** "<<this->_name<<" has been repaired by "<<amount<<", it has "<<this->_hit_points.getter()<<" left."<< std::endl;
}
*/







