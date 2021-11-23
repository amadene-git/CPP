/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:40:53 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:23:30 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# include <iostream>
# include <string>

class	ScavTrap : public ClapTrap
{
	protected:
		ScavTrap(void);

	public:
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const & src);
		// ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs);
		~ScavTrap(void);

		void	attack(std::string const & target);
		void 	guardGate(void);
};

#endif
