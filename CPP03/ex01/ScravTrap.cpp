/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:16 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:25:51 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

//SCRAVTRAP CLASS
ScravTrap::ScravTrap(void)
{
	std::cout << this << "*****ScravTrap**** Default constructor called" << std::endl;
}

ScravTrap::ScravTrap(ScravTrap const & src)
{
	std::cout << this << "*****ScravTrap**** Copy constructor called" << std::endl;
	*this = src;
}

ScravTrap::ScravTrap(std::string const name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << this << "*****ScravTrap**** overload constructor called for " << this->_name << std::endl;
}

ScravTrap	&ScravTrap::operator=(ScravTrap const &rhs)
{
	this->_name = rhs._name;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

ScravTrap::~ScravTrap(void)
{
	std::cout << this << "*****ScravTrap**** destructor called for " << this->_name << std::endl;
}

void    ScravTrap::attack(std::string const & target)
{
	std::cout << this << "*****ScravTrap**** "<<this->_name<<" attack "<<target<<", causing "<<this->_attack_damage<<" points of damage!" << std::endl;
}

/*
void    ScravTrap::takeDamage(unsigned int amount)
{
	this->_hit_points = this->_hit_points - amount;
	std::cout << this << "*****ScravTrap***** "<<this->_name<<" takes "<<amount<<" points of damage! He has "<<this->_hit_points.getter()<<" Hitpoints left." << std::endl;
}

void    ScravTrap::beRepaired(unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this << "*****ScravTrap***** "<<this->_name<<" has been repaired by "<<amount<<", it has "<<this->_hit_points.getter()<<" left."<< std::endl;
}
*/

void	ScravTrap::guardGate(void)
{
	std::cout << this << "*****ScravTrap**** " << this->_name << " has entered in Gatekeeper mode !"<< std::endl;
}







