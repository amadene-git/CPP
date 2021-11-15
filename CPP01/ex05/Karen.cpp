/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:42:35 by admadene          #+#    #+#             */
/*   Updated: 2021/11/15 14:42:41 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen () 
{
	std::cout << "Karen constructor called" << std::endl;
}

Karen::~Karen ()
{
	std::cout << "Karen destructor called" << std::endl;
}

void    Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t";
	std::cout << " put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been";
	std::cout << " coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::nothing(void)
{
    return;
}

void Karen::complain (std::string level)
{
    void (Karen::*pmf[5])();
    pmf[0] = &Karen::nothing;
    pmf[1] = &Karen::debug;
    pmf[2] = &Karen::info;
    pmf[3] = &Karen::warning;
    pmf[4] = &Karen::error;
    
    int i = ("DEBUG" == level) * 1;
    i += ("INFO" == level) * 2;
    i += ("WARNING" == level) * 3;
    i += ("ERROR" == level) * 4;

    (this->*pmf[i])();
}
