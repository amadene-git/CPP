/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:43:15 by admadene          #+#    #+#             */
/*   Updated: 2021/11/15 14:43:18 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main ()
{
	Karen kaka;

    kaka.complain("DEBUG");
    kaka.complain("INFO");
    kaka.complain("WARNING");
    kaka.complain("ERROR");
    kaka.complain("pouet");

	return (0);
}
