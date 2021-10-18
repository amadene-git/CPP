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

# include "ScravTrap.hpp"
# include "FragTrap.hpp"

# include <iostream>
# include <string>

class	DiamondTrap : public ScravTrap, public FragTrap
{
	protected:
		DiamondTrap(void);

	public:
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap	&operator=(DiamondTrap const &rhs);
		~DiamondTrap(void);
};

#endif
