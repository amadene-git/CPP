/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:40:53 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 18:40:25 by admadene         ###   ########.fr       */
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
		~Points(void);
		unsigned int	getter(void);
		Points			&operator=(unsigned int rhs);
		Points			&operator+(unsigned int rhs);
		Points			&operator-(unsigned int rhs);
	private:
		unsigned int	_value;
};

class	ClapTrap
{
	public:
		ClapTrap(std::string const name);
		~ClapTrap(void);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		ClapTrap(void);

		std::string		_Name;
		Points			_Hitpoints;
		Points			_Energy_points;
		unsigned int	_Attack_damage;
};




#endif
