/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:47:10 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 17:22:29 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTOR & DESTRUCTOR
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
	this->_value = i << _fix;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << _fix));// ~= f << _fix
}


//GETTER & SETTER
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


//CONVERTOR
float	Fixed::toFloat(void) const
{
	return ((float)(this->_value) / (1 << _fix));// ~= value >> _fix
}

int		Fixed::toInt(void) const
{
	return (this->_value >> _fix);
}


//OVERLOAD ASSIGNATION
Fixed 	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed 	&Fixed::operator+(Fixed const &rhs)
{
	this->_value += rhs.getRawBits();
	return (*this);
}

Fixed 	&Fixed::operator-(Fixed const &rhs)
{
	this->_value -= rhs.getRawBits();
	return (*this);
}

Fixed 	&Fixed::operator*(Fixed const &rhs)
{
	float a = this->toFloat();
	float b = rhs.toFloat();
	a *= b;
	this->_value = roundf(a * (1 << _fix));
	return (*this);
}

Fixed 	&Fixed::operator/(Fixed const &rhs)
{
	float a = this->toFloat();
	float b = rhs.toFloat();
	a /= b;
	this->_value = roundf(a * (1 << _fix));
	return (*this);
}


//OVERLOAD COMPARISON
bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs.getRawBits());
}

//INCREMENT & DECREMENT
Fixed	&Fixed::operator++()
{
   this->_value++;
   return (*this);
}

Fixed	Fixed::operator++(int)
{
   Fixed	temp = *this;
   ++*this;
   return (temp);
}

//MIN & MAX
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();

	return (out);
}
