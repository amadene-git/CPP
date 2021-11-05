/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:09:37 by admadene          #+#    #+#             */
/*   Updated: 2021/07/01 17:06:11 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{

	public:
		Weapon(void);
		Weapon(std::string weapon_name);
		~Weapon(void);

		std::string const 	&getType(void);
		void				setType(std::string type_name);

	private:
		
		std::string _type;

};

#endif
