/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 14:54:10 by admadene          #+#    #+#             */
/*   Updated: 2021/06/28 17:10:15 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

void	ft_print(std::string str);
int		check_line(std::string line);

class   Contact
{


	public:

    Contact( void );
    ~Contact( void );
	
	void	add_contact(void);
	void	delete_contact(void);
	void	search_contact(int i);
	void	print_contact(void);
    
	private:

	std::string	_first_name;
	std::string	_last_name;
	std::string _nickname;
	std::string	_login;
	std::string	_address;
	std::string	_mail;
	std::string	_phone;
	std::string	_birthday;
	std::string	_meal;
	std::string	_underwear;
	std::string	_secret;
};

#endif
