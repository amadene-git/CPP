/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:40:53 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:23:30 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# include <iostream>
# include <string>

class	DiamondTrap : public virtual ClapTrap, public virtual ScavTrap,  public virtual  FragTrap
{
	protected:
		DiamondTrap(void);

	public:
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & src);
	//	DiamondTrap	&operator=(DiamondTrap const &rhs);
		std::string		getName(void) const;
		Points			getHitpoints(void) const;
		Points			getEnergy_points(void) const;
		unsigned int	getAttack_damage(void) const;
		~DiamondTrap(void);

	private:

		std::string		Name;
		using 			FragTrap::Hitpoints;
	//	Points			Hitpoints;
		using			ScavTrap::Energy_points;
		// Points			Energy_points;
		unsigned int	Attack_damage;
};

std::ostream	&operator<<(std::ostream &out, DiamondTrap const &src);

#endif
