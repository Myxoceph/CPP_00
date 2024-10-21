/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:13 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/21 16:45:04 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contacts.hpp"


class PhoneBook 
{
	public:
			Contact book[8];
			int		index;
			int		count;
			void 	Add();
			void 	Search();

};
void 	SetCursorPosition(int row, int col);

#endif