/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:41:05 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 17:13:43 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) 
{
	Fixed lol(-42);

	std::cout << lol.toFloat() << std::endl;

	Fixed a(42);
	Fixed b(53);

//COMPARISON
	std::cout << "COMPARISON:" << std::endl;
	std::cout << a << " > " << b << "  = "<< (a > b) << std::endl;
	std::cout << a << " >= " << b << " = "<< (a >= b) << std::endl;
	std::cout << a << " < " << b << "  = "<< (a < b) << std::endl;
	std::cout << a << " <= " << b << " = "<< (a <= b) << std::endl;
	std::cout << a << " == " << b << "  = "<< (a == b) << std::endl;
	std::cout << a << " != " << b << "  = "<< (a != b) << std::endl;
	b = 41.99f;
	std::cout << a << " > " << b << "  = "<< (a > b) << std::endl;
	std::cout << a << " >= " << b << " = "<< (a >= b) << std::endl;
	std::cout << a << " < " << b << "  = "<< (a < b) << std::endl;
	std::cout << a << " <= " << b << " = "<< (a <= b) << std::endl;
	std::cout << a << " == " << b << "  = "<< (a == b) << std::endl;
	std::cout << a << " != " << b << "  = "<< (a != b) << std::endl;
	a = 42.02f;
	std::cout << a << " > " << b << "  = "<< (a > b) << std::endl;
	std::cout << a << " >= " << b << " = "<< (a >= b) << std::endl;
	std::cout << a << " < " << b << "  = "<< (a < b) << std::endl;
	std::cout << a << " <= " << b << " = "<< (a <= b) << std::endl;
	std::cout << a << " == " << b << "  = "<< (a == b) << std::endl;
	std::cout << a << " != " << b << "  = "<< (a != b) << std::endl;
	b = a;	
	std::cout << a << " > " << b << "  = "<< (a > b) << std::endl;
	std::cout << a << " >= " << b << " = "<< (a >= b) << std::endl;
	std::cout << a << " < " << b << "  = "<< (a < b) << std::endl;
	std::cout << a << " <= " << b << " = "<< (a <= b) << std::endl;
	std::cout << a << " == " << b << "  = "<< (a == b) << std::endl;
	std::cout << a << " != " << b << "  = "<< (a != b) << std::endl;
	a = 123;
	b = 123;
	std::cout << a << " > " << b << "  = "<< (a > b) << std::endl;
	std::cout << a << " >= " << b << " = "<< (a >= b) << std::endl;
	std::cout << a << " < " << b << "  = "<< (a < b) << std::endl;
	std::cout << a << " <= " << b << " = "<< (a <= b) << std::endl;
	std::cout << a << " == " << b << "  = "<< (a == b) << std::endl;
	std::cout << a << " != " << b << "  = "<< (a != b) << std::endl << std::endl;


//ASSIGNATION

	std::cout << "ASSIGNATION" << std::endl;
	a = 5.3f;
	std::cout << "(a = 5.3f) -> a = " << a << std::endl;
	a = a * 1.2f;
	std::cout << "(a = a * 1.2f) -> a = " << a << std::endl;
	a = b;
	std::cout << "(a = b) -> a = " << a << std::endl << std::endl;

//ARITHMETIC

	std::cout << "ARITHMETIC" << std::endl;
	a = 13.59f;
	b = 45.789f;
	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl << std::endl;


//++ --

	std::cout << "INCREMENT" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl << std::endl;
	
	std::cout << "MIN MAX" << std::endl;
	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "max(a, b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl;
	return 0;
}


