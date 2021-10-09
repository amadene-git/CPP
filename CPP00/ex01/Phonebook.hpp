/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:02:30 by admadene          #+#    #+#             */
/*   Updated: 2021/10/09 14:38:10 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>


class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		int		index;
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string	login;
		std::string	address;
		std::string	mail;
		std::string	phone;
		std::string	birthday;
		std::string	meal;
		std::string	underwear;
		std::string	secret;
	
		void	print_contact(void);
		void	add_contact(int index);
		void	delete_contact(void);
		void	print_tronc(void);

};


class	Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);

		Contact list[8];

		void	search_contact(int i);

};


#endif
