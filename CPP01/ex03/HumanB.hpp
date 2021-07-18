/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:26:04 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 17:37:06 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB
{
	public:
		
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon& ref);
		void	attack(void);
	
	private:
	
		std::string	_name;
		Weapon*	_weapon;

};


#endif
