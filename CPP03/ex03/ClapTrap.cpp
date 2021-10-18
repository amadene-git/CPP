/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:36:47 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 13:08:22 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//POINTS CLASS
Points::Points(void){}
Points::Points(Points const &src){*this = src;}
Points::~Points(void){}
unsigned int	Points::getter(void){return (this->_value);}

Points 			&Points::operator=(unsigned int rhs)
{
	this->_value = (rhs < 0) ? 0 : rhs;
	return (*this);
}

Points			&Points::operator+(unsigned int rhs)
{
	this->_value += rhs;
	return (*this);
}

Points			&Points::operator-(unsigned int rhs)
{
	this->_value = (this->_value < rhs) ? 0 : this->_value - rhs;
	return (*this);
}


//CLAPTRAP CLASS
ClapTrap::ClapTrap(void)
{
	std::cout << this << "*****ClapTrap***** Default constructor called for" << this->_name<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << this << "*****ClapTrap***** Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << this << "*****ClapTrap***** overload constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this << "*****ClapTrap***** destructor called for " << this->_name << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
	std::cout << this << "*****ClapTrap***** "<<this->_name<<" attack "<<target<<", causing "<<this->_attack_damage<<" points of damage!" << std::endl;
}


void    ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points = this->_hit_points - amount;
	std::cout << this << "*****ClapTrap***** "<<this->_name<<" takes "<<amount<<" points of damage! He has "<<this->_hit_points.getter()<<" Hitpoints left." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this << "*****ClapTrap***** "<<this->_name<<" has been repaired by "<<amount<<", it has "<<this->_hit_points.getter()<<" left."<< std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

