/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:19:19 by admadene          #+#    #+#             */
/*   Updated: 2021/11/24 05:14:56 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal  *array[10];

    for (int i = 0; i < 5; i++)
        array[i] = new Dog;
    std::cout << std::endl;
    for (int i = 5; i < 10; i++)
        array[i] = new Cat;
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << i << ": " << *array[i];
    std::cout << std::endl;
    
    Animal **ptr = &array[0];
    for (int i = 0; i < 10; i++)
        delete ptr[i];
    std::cout << std::endl;

    Cat bob;
    bob.getBrain().setTheIdea(45, "lolilol");
    std::cout << std::endl;

    Cat *felix = new Cat(bob);
    std::cout << felix->getBrain().getTheIdea(45) << std::endl;
    std::cout << std::endl;
   
    Cat chaton = *felix;
    delete felix;
    std::cout << chaton.getBrain().getTheIdea(45) << std::endl;
    std::cout << std::endl;

    Dog snoopy;
    snoopy.getBrain().setTheIdea(99, "pouet pouet");
    std::cout << std::endl;

    Dog *medor = new Dog(snoopy);
    std::cout << medor->getBrain().getTheIdea(99) << std::endl;
    std::cout << std::endl;
   
    Dog toutou = *medor;
    Dog *scooby  = new Dog(*medor);
    delete medor;
    std::cout << toutou.getBrain().getTheIdea(99) << std::endl;
    std::cout << scooby->getBrain().getTheIdea(99) << std::endl;
    std::cout << std::endl;
	delete scooby;
//   system("leaks Brain");
}
