/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:09:38 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/23 14:26:12 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->count = 0;
}

void Contact::SetIndex(int i)
{
	this->index = i;
}

void Contact::SetFirstName(std::string str)
{
	this->first_name = str;
}

void Contact::SetLastName(std::string str)
{
	this->last_name = str;
}

void Contact::SetNickname(std::string str)
{
	this->nickname = str;
}

void Contact::SetPhoneNumber(std::string str)
{
	this->phone_number = str;
}

void Contact::SetSecret(std::string str)
{
	this->secret = str;
}

int Contact::GetIndex()
{
	return (this->index);
}

std::string Contact::GetFirstName()
{
	return (this->first_name);
}

std::string Contact::GetLastName()
{
	return (this->last_name);
}

std::string Contact::GetNickname()
{
	return (this->nickname);
}

std::string Contact::GetPhoneNumber()
{
	return (this->phone_number);
}

std::string Contact::GetSecret()
{
	return (this->secret);
}

