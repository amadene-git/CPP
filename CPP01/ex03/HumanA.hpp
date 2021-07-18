/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:43:49 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 17:23:02 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanA
{
	public:

		
		HumanA(std::string name, Weapon &weaponref);
		~HumanA(void);

		void	attack(void);

	private:
	
		std::string	_name;
		Weapon*		_weapon;
};

#endif
