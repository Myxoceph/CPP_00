/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:06 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/20 19:15:07 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
			int			index;
			std::string first_name;
			std::string last_name;
			std::string nickname;
			std::string phone_number;
			std::string secret;

			Contact();
			Contact(int			index,
					std::string first_name,
					std::string last_name,
					std::string nickname,
					std::string phone_number,
					std::string secret);
};

#endif