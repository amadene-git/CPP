/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:40:53 by admadene          #+#    #+#             */
/*   Updated: 2021/10/18 14:23:30 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# include <iostream>
# include <string>

class	FragTrap : public ClapTrap
{
	protected:
		FragTrap(void);

	public:
		FragTrap(std::string const name);
		FragTrap(FragTrap const & src);
		FragTrap	&operator=(FragTrap const &rhs);
		~FragTrap(void);

		void	highFivesGuys(void);
};

#endif
