/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:19:19 by admadene          #+#    #+#             */
/*   Updated: 2021/11/14 03:19:21 by admadene         ###   ########.fr       */
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

    Dog snoopy;
    std::cout << snoopy << std::endl;
    //A_Animal boby;

//   system("leaks Brain");
}