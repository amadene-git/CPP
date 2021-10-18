/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                       :+:      :+:    :+:   */
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

class	ScravTrap : virtual public ClapTrap
{
	protected:
		ScravTrap(void);

	public:
		ScravTrap(std::string const name);
		ScravTrap(ScravTrap const & src);
		ScravTrap	&operator=(ScravTrap const &rhs);
		~ScravTrap(void);

		void	attack(std::string const & target);
//		void	takeDamage(unsigned int amount);
//		void	beRepaired(unsigned int amount);
		void 	guardGate(void);

};

#endif
