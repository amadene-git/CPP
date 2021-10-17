/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:05:32 by admadene          #+#    #+#             */
/*   Updated: 2021/10/17 17:18:58 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const i);
		Fixed(float const f);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(Fixed const &rhs);
		Fixed	&operator+(Fixed const &rhs);
		Fixed	&operator-(Fixed const &rhs);
		Fixed	&operator*(Fixed const &rhs);
		Fixed	&operator/(Fixed const &rhs);
		bool	operator>(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
		Fixed	&operator++();
		Fixed	operator++(int);
static	Fixed	&min(Fixed &a, Fixed &b);
static	Fixed	&max(Fixed &a, Fixed &b);
static	Fixed const	&min(Fixed const &a, Fixed const &b);
static	Fixed const	&max(Fixed const &a, Fixed const &b);
	
	
	private:

		int					_value;
		static int const	_fix = 8;
};

std::ostream& operator<<(std::ostream &out, Fixed const &src);


#endif
