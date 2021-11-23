/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:40:53 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 13:01:32 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class	Points
{
	public:
		Points(void);
		Points(Points const &src);
		Points(unsigned int i);
		Points			&operator=(unsigned int rhs);
		~Points(void);
		
		unsigned int	getter(void) const;
		
		Points			&operator+(unsigned int rhs);
		Points			&operator-(unsigned int rhs);
	
	private:
		unsigned int	_value;
};
std::ostream	&operator<<(std::ostream &out, Points const &src);

class	ClapTrap
{	
	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		ClapTrap	&operator=(ClapTrap const &rhs);
		~ClapTrap(void);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName(void) const;
		Points			getHitpoints(void) const;
		Points			getEnergy_points(void) const;
		unsigned int	getAttack_damage(void) const;

	private:
		ClapTrap(void);

		std::string		Name;
		Points			Hitpoints;
		Points			Energy_points;
		unsigned int	Attack_damage;
};

std::ostream	&operator<<(std::ostream &out, ClapTrap const &src);

#endif
