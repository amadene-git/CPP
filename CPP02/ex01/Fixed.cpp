/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:47:10 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 14:50:09 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = i << _fix;// = value * (2 ^ _fix)
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	int exp = 1;
	for (int i = 0; i < _fix && _fix > 0; i++)
		exp *= 2;
	this->_value = roundf(f * exp);// ~= f << _fix
}

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
//	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed 	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	int exp = 1;
	for (int i = 0; i < _fix && _fix > 0; i++)
		exp *= 2;	
	return ((float)this->_value / exp);// ~= value >> _fix
}

int		Fixed::toInt(void) const
{
	return (this->_value >> _fix);// = value / (2 ^ _fix)
}

std::ostream	&operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();

	return (out);
}
