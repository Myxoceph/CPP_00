/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:09 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/21 17:58:42 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"
#include "phonebook.hpp"
#include <iomanip>

void PhoneBook::Add()
{
	std::string input;
	bool is_digit = true;
	if (this->index == 8)
		this->index = 0;
	this->book[this->index].index = this->index;
	while (1)
	{
		SetCursorPosition(12, 0);
		std::cout << "Please enter the first name: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		for (char ch : input)
			if (ch == '\t' || ch == '\n')
				continue;
		break;
	}
	this->book[this->index].first_name = input;
	while (1)
	{
		SetCursorPosition(12, 0);
		std::cout << "Please enter the last name: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		for (char ch : input)
			if (ch == ' ' || ch == '\t' || ch == '\n')
				continue;
		break;
	}
	this->book[this->index].last_name = input;
	while (1)
	{
		SetCursorPosition(12, 0);
		std::cout << "Please enter the nickname: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		for (char ch : input)
			if (ch == '\t' || ch == '\n')
				continue;
		break;
	}
	this->book[this->index].nickname = input;
	while (1)
	{
		SetCursorPosition(12, 0);
		std::cout << "Please enter the phone number: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		for (char ch : input)
		{
			if (ch < '0' || ch > '9')
			{
				is_digit = false;
				break;
			}
    	}
		if (is_digit == false)
		{
			is_digit = true;
			continue;
		}
		break;
	}
	this->book[this->index].phone_number = input;
	while (1)
	{
		SetCursorPosition(12, 0);
		std::cout << "Please enter the darkest secret: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		break;
	}
	this->book[this->index].secret = input;
	this->book[this->index].index++;
	this->index++;
	if (this->count < 8)
		this->count++;
}

void PhoneBook::Search()
{
	std::string input;
	int i = 0;
	if (this->count == 0)
	{
		std::cout << "No contacts to display. ";
		return ;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	while (i < this->count)
	{
		std::cout << std::setw(10) << this->book[i].index << "|";
		if (this->book[i].first_name.length() > 10)
			std::cout << std::setw(9) << this->book[i].first_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->book[i].first_name << "|";
		if (this->book[i].last_name.length() > 10)
			std::cout << std::setw(9) << this->book[i].last_name.substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->book[i].last_name << "|";
		if (this->book[i].nickname.length() > 10)
			std::cout << std::setw(9) << this->book[i].nickname.substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->book[i].nickname << std::endl;
		i++;
	}
	while (1)
	{
		std::cout << "Please enter the index of the contact: ";
		std::getline(std::cin, input);
		if (input.empty())
			continue;
		for (char ch : input)
		{
			if (ch < '0' || ch > '9')
			{
				std::cout << "Invalid input. ";
				continue;
			}
			i = ch - '0';
		}
		if (i < 0 || i > this->count)
		{
			std::cout << "Invalid input. ";
			continue;
		}
		else
			break;
	}
	i--;
	SetCursorPosition(12, 0);
	std::cout << "First Name: \t" << this->book[i].first_name << std::endl;
	std::cout << "Last Name: \t" << this->book[i].last_name << std::endl;
	std::cout << "Nickname: \t" << this->book[i].nickname << std::endl;
	std::cout << "Phone Number: \t" << this->book[i].phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->book[i].secret << std::endl << std::endl;
}
