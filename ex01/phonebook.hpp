/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:13 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/23 14:23:46 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Contact
{
	private:
			int			index;
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string phone_number;
			std::string secret;

	public:
			void SetIndex(int i);
			void SetFirstName(std::string str);
			void SetLastName(std::string str);
			void SetNickname(std::string str);
			void SetPhoneNumber(std::string str);
			void SetSecret(std::string str);
			int  GetIndex();
			std::string GetFirstName();
			std::string GetLastName();
			std::string GetNickname();
			std::string GetPhoneNumber();
			std::string GetSecret();
};

class PhoneBook 
{
	private:
			Contact book[8];
			int		index;
			int		count;

	public:
			PhoneBook();
			void 	Add();
			void 	Search();
};

void 	SetCursorPosition(int row, int col);

#endif