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

//SCRAVTRAP CLASS
FragTrap::FragTrap(void)
{
	std::cout << this << "*****FragTrap***** Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << this << "*****FragTrap***** Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::FragTrap(std::string const name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << this << "*****FragTrap***** overload constructor called for " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << this << "*****FragTrap***** destructor called for " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this << "*****FragTrap***** " << this->_name << " asks for a positive high fives !"<< std::endl;
}

/*
void    FragTrap::attack(std::string const & target)
{
	std::cout << this << "*****FragTrap***** "<<this->_name<<" attack "<<target<<", causing "<<this->_attack_damage<<" points of damage!" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
	this->_hit_points = this->_hit_points - amount;
	std::cout << this << "*****FragTrap****** "<<this->_name<<" takes "<<amount<<" points of damage! He has "<<this->_hit_points.getter()<<" Hitpoints left." << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this << "*****FragTrap****** "<<this->_name<<" has been repaired by "<<amount<<", it has "<<this->_hit_points.getter()<<" left."<< std::endl;
}
*/







