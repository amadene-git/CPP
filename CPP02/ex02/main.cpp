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
//	Fixed a(42);
//	Fixed b(53);
/*
//COMPARISON
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
	std::cout << a << " != " << b << "  = "<< (a != b) << std::endl;
*/

//ASSIGNATION
/*
	a = 5.3f;
	a = a * 1.2f;
	
	std::cout << a << std::endl;

	printf("1\n");
	a = 9;
	printf("2\n");
	a = a / 2;
	printf("3\n");
	std::cout << a << std::endl;
	printf("4\n");

*/	
//++ --
	
	Fixed a;
Fixed const b(Fixed(5.05f) * Fixed(2));
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}


