/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:19:19 by admadene          #+#    #+#             */
/*   Updated: 2021/11/24 05:27:21 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Cat bob;

    std::cout << bob;

    bob.getBrain().setTheIdea(45, "lol");
    std::cout << bob.getBrain().getTheIdea(45) << std::endl << std::endl;

	Cat	*boby = new Cat(bob);
	std::cout << boby->getBrain().getTheIdea(45) << std::endl << std::endl;
    delete boby;


	Dog snoopy;
    std::cout << snoopy << std::endl;
    //A_Animal boby;

//   system("leaks Brain");
}
