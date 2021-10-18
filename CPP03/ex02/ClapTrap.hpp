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
		Points			&operator=(unsigned int rhs);
		~Points(void);
		
		unsigned int	getter(void);
		
		Points			&operator+(unsigned int rhs);
		Points			&operator-(unsigned int rhs);
	
	private:
		unsigned int	_value;
};

class	ClapTrap
{
	protected:
		ClapTrap(void);
		std::string		_name;
		Points			_hit_points;
		Points			_energy_points;
		unsigned int	_attack_damage;
	
	public:
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		ClapTrap	&operator=(ClapTrap const &rhs);
		~ClapTrap(void);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};




#endif
