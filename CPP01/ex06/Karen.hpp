/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:43:03 by admadene          #+#    #+#             */
/*   Updated: 2021/11/15 14:43:06 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen
{
	public:
		Karen(void);
		~Karen(void);

		void    complain(std::string level);

	private:
		void    debug(void);
		void    info(void);
		void    warning(void);
		void    error(void);
        void    nothing(void);
};

#endif
