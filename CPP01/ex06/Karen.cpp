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
//	std::cout << "Karen constructor called" << std::endl;
}

Karen::~Karen ()
{
//	std::cout << "Karen destructor called" << std::endl;
}

void    Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void    Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void    Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}

void    Karen::nothing(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::complain (std::string level)
{
    int i = 0;
    i += ("DEBUG" == level) * 1;
    i += ("INFO" == level) * 2;
    i += ("WARNING" == level) * 3;
    i += ("ERROR" == level) * 4;

    switch(i)
    {
        case 0:
            this->nothing();
            break;
        case 1:
            this->debug();
        case 2:
            this->info();
        case 3:
            this->warning();
        case 4:
            this->error();
    }
}
