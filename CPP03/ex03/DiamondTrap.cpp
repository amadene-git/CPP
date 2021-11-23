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

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(),
Name(name), Attack_damage(FragTrap::Attack_damage)
{
	std::cout << this << "*****DiamondTrap***** overload constructor called for " << this->Name << std::endl;
	ClapTrap::Name = Name + "clap_name";
	std::cout << "ClapTrap :" << ClapTrap::Name << " " << ClapTrap::Attack_damage << std::endl;
	std::cout << "ScavTrap :" << ScavTrap::Name << " " << ScavTrap::Attack_damage << std::endl;
	std::cout << "FragTrap :" << FragTrap::Name << " " << FragTrap::Attack_damage << std::endl;
}

std::string		DiamondTrap::getName(void) const
{
	return (this->Name);
}

Points			DiamondTrap::getHitpoints(void) const
{
	return (this->Hitpoints);
}

Points			DiamondTrap::getEnergy_points(void) const
{
	return (this->Energy_points);
}

unsigned int	DiamondTrap::getAttack_damage(void) const
{
	return (this->Attack_damage);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << this << "*****DiamondTrap***** destructor called for " << this->Name << std::endl;
}

std::ostream	&operator<<(std::ostream &out, DiamondTrap const &src)
{
	out << "Name :" << src.getName() << " -> " << &src << std::endl;
	out << "HitPoint :" << src.getHitpoints() << std::endl;
	out << "Energy Points :" << src.getEnergy_points() << std::endl;
	out << "Attack damage :" << src.getAttack_damage() << std::endl;
	return (out);
}

/*
void    DiamondTrap::attack(std::string const & target)
{
	std::cout << this << "*****DiamondTrap***** "<<this->Name<<" attack "<<target<<", causing "<<this->Attack_damage<<" points of damage!" << std::endl;
}

void    DiamondTrap::takeDamage(unsigned int amount)
{
	this->_hit_points = this->_hit_points - amount;
	std::cout << this << "*****DiamondTrap****** "<<this->Name<<" takes "<<amount<<" points of damage! He has "<<this->_hit_points.getter()<<" Hitpoints left." << std::endl;
}

void    DiamondTrap::beRepaired(unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this << "*****DiamondTrap****** "<<this->Name<<" has been repaired by "<<amount<<", it has "<<this->_hit_points.getter()<<" left."<< std::endl;
}
*/







