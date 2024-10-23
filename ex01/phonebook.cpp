/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:09 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/23 16:35:34 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::Add()
{
	std::string input;
	bool flag = false;
	if (this->index == 8)
		this->index = 0;
	this->book[this->index].SetIndex(this->index);
	SetCursorPosition(12, 0);
	while (1)
	{
		std::cout << "Please enter the first name: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			if (std::cin.eof())
			{
				SetCursorPosition(12, 0);
				std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
				exit(0);
			}
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] == '\t' || input[0] == ' ')
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			flag = false;
			continue;
		}
		break;
	}
	this->book[this->index].SetFirstName(input);
	SetCursorPosition(12, 0);
	while (1)
	{
		std::cout << "Please enter the last name: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			if (std::cin.eof())
			{
				SetCursorPosition(12, 0);
				std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
				exit(0);
			}
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] == '\t' || input[i] == ' ')
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			flag = false;
			continue;
		}
		break;
	}
	this->book[this->index].SetLastName(input);
	SetCursorPosition(12, 0);
	while (1)
	{
		std::cout << "Please enter the nickname: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			if (std::cin.eof())
			{
				SetCursorPosition(12, 0);
				std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
				exit(0);
			}
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] == '\t' || input[0] == ' ')
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			flag = false;
			continue;
		}
		break;
	}
	this->book[this->index].SetNickname(input);
	SetCursorPosition(12, 0);
	while (1)
	{
		std::cout << "Please enter the phone number: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			if (std::cin.eof())
			{
				SetCursorPosition(12, 0);
				std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
				exit(0);
			}
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] < '0' || input[i] > '9')
			{
				flag = true;
				break;
			}
    	}
		if (flag == true)
		{
			flag = false;
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		break;
	}
	this->book[this->index].SetPhoneNumber(input);
	SetCursorPosition(12, 0);
	while (1)
	{
		std::cout << "Please enter the darkest secret: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			if (std::cin.eof())
			{
				SetCursorPosition(12, 0);
				std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
				exit(0);
			}
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] == '\t' || input[0] == ' ')
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
		{
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
			flag = false;
			continue;;
		}
		break;
	}
	this->book[this->index].SetSecret(input);
	this->book[this->index].SetIndex(this->index);
	this->index++;
	if (this->count < 8)
		this->count++;
}

void PhoneBook::Search()
{
	std::string input;
	int res = 0;
	int i = 0;
	int flag = false;
	if (this->count == 0)
	{
		std::cout << "No contacts to display. ";
		return ;
	}
	std::cout << std::setw(10) <<"Index" << "|";
	std::cout << std::setw(10) <<"First Name" << "|";
	std::cout << std::setw(10) <<"Last Name" << "|";
	std::cout << std::setw(10) <<"Nickname" << std::endl;
	while (i < this->count)
	{
		std::cout << std::setw(10) << this->book[i].GetIndex() + 1 << "|";
		if (this->book[i].GetFirstName().length() >= 10)
			std::cout << std::setw(9) << this->book[i].GetFirstName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->book[i].GetFirstName() << "|";
		if (this->book[i].GetLastName().length() >= 10)
			std::cout << std::setw(9) << this->book[i].GetLastName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->book[i].GetLastName() << "|";
		if (this->book[i].GetNickname().length() >= 10)
			std::cout << std::setw(9) << this->book[i].GetNickname().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << this->book[i].GetNickname() << std::endl;
		i++;
	}
	while (1)
	{
		res = 0;
		std::cout << "Please enter the index of the contact: ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			if (std::cin.eof())
			{
				SetCursorPosition(12, 0);
				std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
				exit(0);
			}
			SetCursorPosition(13 + i, 0);
			continue;
		}
		if (input.length() > 10)
		{
			SetCursorPosition(13 + i, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		for (int i = 0; input[i]; i++)
		{
			if (input[i] < '0' || input[i] > '9')
			{
				flag = true;
				break;
			}
			res = res * 10 + (input[i] - '0');
		}
		if (flag == true)
		{
			SetCursorPosition(13 + i, 0);
			std::cout << "Invalid input. ";
			flag = false;
			continue;
		}
		if (res <= 0 || res > this->count)
		{
			SetCursorPosition(13 + i, 0);
			std::cout << "Invalid input. ";
			continue;
		}
		else
			break;
	}
	res--;
	SetCursorPosition(13 + i, 0);
	std::cout << std::endl;
	std::cout << "First Name: \t" << this->book[res].GetFirstName() << std::endl;
	std::cout << "Last Name: \t" << this->book[res].GetLastName() << std::endl;
	std::cout << "Nickname: \t" << this->book[res].GetNickname() << std::endl;
	std::cout << "Phone Number: \t" << this->book[res].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->book[res].GetSecret() << std::endl << std::endl;
}
