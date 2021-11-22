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
unsigned int	Points::getter(void) const {return (this->_value);}

Points 			&Points::operator=(unsigned int rhs)
{
	this->_value = rhs;
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

std::ostream	&operator<<(std::ostream &out, Points const &src)
{
	out << src.getter();
	return (out);
}

//CLAPTRAP CLASS
ClapTrap::ClapTrap(void)
{
	std::cout << this << "*****ClapTrap***** Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << this << "*****ClapTrap***** Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string const name) : Name(name)
{
	this->Energy_points = 10;
	this->Hitpoints = 10;
	this->Attack_damage = 0;
	std::cout << this << "*****ClapTrap***** overload constructor called for " << this->Name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this << "*****ClapTrap***** destructor called for " << this->Name << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
	std::cout << this << "*****ClapTrap***** "<<this->Name<<" attack "<<target<<", causing "<<this->Attack_damage<<" points of damage!" << std::endl;
}


void    ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints = this->Hitpoints - amount;
	std::cout << this << "*****ClapTrap***** "<<this->Name<<" takes "<<amount<<" points of damage! He has "<<this->Hitpoints.getter()<<" Hitpoints left." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints = this->Hitpoints + amount;
	std::cout << this << "*****ClapTrap***** "<<this->Name<<" has been repaired by "<<amount<<", it has "<<this->Hitpoints.getter()<<" left."<< std::endl;
}

std::string		ClapTrap::getName(void) const
{
	return (this->Name);
}

Points			ClapTrap::getHitpoints(void) const
{
	return (this->Hitpoints);
}

Points			ClapTrap::getEnergy_points(void) const
{
	return (this->Energy_points);
}

unsigned int	ClapTrap::getAttack_damage(void) const
{
	return (this->Attack_damage);
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "*****ClapTrap***** Assignation overload called for " << this << std::endl;
	this->Name = rhs.getName();
	this->Energy_points = rhs.getEnergy_points();
	this->Hitpoints = rhs.getHitpoints();
	this->Attack_damage = rhs.getAttack_damage();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, ClapTrap const &src)
{
	out << "Name :" << src.getName() << " -> " << &src << std::endl;
	out << "HitPoint :" << src.getHitpoints() << std::endl;
	out << "Energy Points :" << src.getEnergy_points() << std::endl;
	out << "Attack damage :" << src.getAttack_damage() << std::endl;
	return (out);
}
