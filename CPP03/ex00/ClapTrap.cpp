/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:36:47 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 18:45:35 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Points::Points(void){}
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

Points 	&Points::operator-(unsigned int rhs)
{
	this->_value = (this->_value < rhs) ? 0 : this->_value - rhs;
	return (*this);
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
{
	this->_Name = name;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	std::cout << "ClapTrap overload constructor called for " << this->_Name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called for " << this->_Name << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap "<<this->_Name<<" attack "<<target<<", causing "<<this->_Attack_damage<<" points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	this->_Hitpoints = this->_Hitpoints - amount;
	std::cout << "ClapTrap "<<this->_Name<<" takes "<<amount<<" points of damage! He has "<<this->_Hitpoints.getter()<<" Hitpoints left." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	this->_Hitpoints = this->_Hitpoints + amount;
	std::cout << "ClapTrap "<<this->_Name<<" has been repaired by "<<amount<<", it has "<<this->_Hitpoints.getter()<<" left."<< std::endl;
}



