/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:41:05 by admadene          #+#    #+#             */
/*   Updated: 2021/11/16 21:44:52 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) 
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << "-------------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "-------------------" << std::endl;
	a = 42;
	Fixed c = 53;

//COMPARISON
	std::cout << "COMPARISON:" << std::endl;
	std::cout << a << " > " << c << "  = "<< (a > c) << std::endl;
	std::cout << a << " >= " << c << " = "<< (a >= c) << std::endl;
	std::cout << a << " < " << c << "  = "<< (a < c) << std::endl;
	std::cout << a << " <= " << c << " = "<< (a <= c) << std::endl;
	std::cout << a << " == " << c << "  = "<< (a == c) << std::endl;
	std::cout << a << " != " << c << "  = "<< (a != c) << std::endl;
	c = 41.99f;
	std::cout << a << " > " << c << "  = "<< (a > c) << std::endl;
	std::cout << a << " >= " << c << " = "<< (a >= c) << std::endl;
	std::cout << a << " < " << c << "  = "<< (a < c) << std::endl;
	std::cout << a << " <= " << c << " = "<< (a <= c) << std::endl;
	std::cout << a << " == " << c << "  = "<< (a == c) << std::endl;
	std::cout << a << " != " << c << "  = "<< (a != c) << std::endl;
	a = 42.02f;
	std::cout << a << " > " << c << "  = "<< (a > c) << std::endl;
	std::cout << a << " >= " << c << " = "<< (a >= c) << std::endl;
	std::cout << a << " < " << c << "  = "<< (a < c) << std::endl;
	std::cout << a << " <= " << c << " = "<< (a <= c) << std::endl;
	std::cout << a << " == " << c << "  = "<< (a == c) << std::endl;
	std::cout << a << " != " << c << "  = "<< (a != c) << std::endl;
	c = a;	
	std::cout << a << " > " << c << "  = "<< (a > c) << std::endl;
	std::cout << a << " >= " << c << " = "<< (a >= c) << std::endl;
	std::cout << a << " < " << c << "  = "<< (a < c) << std::endl;
	std::cout << a << " <= " << c << " = "<< (a <= c) << std::endl;
	std::cout << a << " == " << c << "  = "<< (a == c) << std::endl;
	std::cout << a << " != " << c << "  = "<< (a != c) << std::endl;
	a = 123;
	c = 123;
	std::cout << a << " > " << c << "  = "<< (a > c) << std::endl;
	std::cout << a << " >= " << c << " = "<< (a >= c) << std::endl;
	std::cout << a << " < " << c << "  = "<< (a < c) << std::endl;
	std::cout << a << " <= " << c << " = "<< (a <= c) << std::endl;
	std::cout << a << " == " << c << "  = "<< (a == c) << std::endl;
	std::cout << a << " != " << c << "  = "<< (a != c) << std::endl << std::endl;


//ASSIGNATION

	std::cout << "ASSIGNATION" << std::endl;
	a = 5.3f;
	std::cout << "(a = 5.3f) -> a = " << a << std::endl;
	a = a * 1.2f;
	std::cout << "(a = a * 1.2f) -> a = " << a << std::endl;
	a = c;
	std::cout << "(a = c) -> a = " << a << std::endl << std::endl;

//ARITHMETIC

	std::cout << "ARITHMETIC" << std::endl;
	a = 13.59f;
	c = 45.789f;
	std::cout << "a = " << a << "; c = " << c << std::endl;
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a - c = " << a - c << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a / c = " << a / c << std::endl << std::endl;




//++ --
	a = 42;
	std::cout << "INCREMENT" << std::endl;
	std::cout << "PRE->" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "POST" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << "DECREMENT" << std::endl;
	std::cout << "PRE->" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << "POST" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

//MIN MAX	
	std::cout << "MIN MAX" << std::endl;
	a = b;
	--a;
	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl << std::endl;;
	a = b;
	std::cout << "a = " << a << " -> "<< &a << "; b = " << b << " -> " << &b << std::endl;
	std::cout << "max(a, b) : " << Fixed::max(a, b) << " -> " << &Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) : " << Fixed::max(a, b) << " -> " << &Fixed::min(a, b) << std::endl;
	return 0;
}


