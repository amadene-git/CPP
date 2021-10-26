/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:02:30 by admadene          #+#    #+#             */
/*   Updated: 2021/10/26 19:58:12 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		
		void	print_contact(void);
		void	delete_contact(void);
		void	print_tronc(void);
		int		is_empty(void);
		
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string get_nickname(void);
		std::string	get_phone(void);
		std::string	get_secret(void);
		void		set_first_name(std::string str);
		void		set_last_name(std::string str);
		void		set_nickname(std::string str);
		void		set_phone(std::string str);
		void		set_secret(std::string str);
		void		set_index(int index);

	private:
		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string _nickname;
		std::string	_phone;
		std::string	_secret;
	

};


class	Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		
		int		search_contact(int i);
		int		add_contact(int index);
		Contact	*getter(void);


	private:
		Contact _list[8];

};


#endif
