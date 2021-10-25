/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:02:30 by admadene          #+#    #+#             */
/*   Updated: 2021/10/15 14:10:02 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include <iostream>
# include <istream>
# include <fstream>
# include <array>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		
		void	print_contact(void);
		int		add_contact(int index);
		void	delete_contact(void);
		void	print_tronc(void);
		int		is_empty(void);

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
		Contact	*getter(void);


	private:
		Contact _list[8];

};


#endif
