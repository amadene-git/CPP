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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << *meta;
    std::cout << *i;
    std::cout << *j;
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "\n\nWrongAnimal:\n" << std::endl;

    const   WrongAnimal*    beta = new WrongAnimal();
    const   WrongAnimal*    a = new WrongCat();

    beta->getType();
    a->getType();
    beta->makeSound();
    a->makeSound();
    std::cout << *beta;
    std::cout << *a;

    delete  beta;
    delete  a;

}