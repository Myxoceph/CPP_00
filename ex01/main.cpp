/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:04 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/22 15:26:09 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Starting()
{
	std::cout << "\033[2J\033[1;1H";
	std::cout << "\033[0;33m";
	std::cout << "    ▗▄▄▄▖▐▌   ▗▞▀▚▖    ▗▄▄▖ ▗▞▀▚▖ ▄▄▄  ■" << std::endl;
	std::cout << "      █  ▐▌   ▐▛▀▀▘    ▐▌ ▐▌▐▛▀▀▘▀▄▄▗▄▟▙▄▖" << std::endl;
	std::cout << "      █  ▐▛▀▚▖▝▚▄▄▖    ▐▛▀▚▖▝▚▄▄▖▄▄▄▀ ▐▌" << std::endl;
	std::cout << "      █  ▐▌ ▐▌         ▐▙▄▞▘          ▐▌" << std::endl;
	std::cout << "                                      ▐▌" << std::endl;
	std::cout << std::endl;
	std::cout << "▗▄▄▖ ▐▌    ▄▄▄  ▄▄▄▄  ▗▞▀▚▖▗▄▄▖  ▄▄▄   ▄▄▄  █  ▄ " << std::endl;
	std::cout << "▐▌ ▐▌▐▌   █   █ █   █ ▐▛▀▀▘▐▌ ▐▌█   █ █   █ █▄▀" << std::endl;
	std::cout << "▐▛▀▘ ▐▛▀▚▖▀▄▄▄▀ █   █ ▝▚▄▄▖▐▛▀▚▖▀▄▄▄▀ ▀▄▄▄▀ █ ▀▄ " << std::endl;
	std::cout << "▐▌   ▐▌ ▐▌                 ▐▙▄▞▘            █  █" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[0m";
}

void SetCursorPosition(int row, int col) 
{
    std::cout << "\033[" << row << ";" << col << "H";
	std::cout << "\033[J";
}

int main()
{
	PhoneBook book;
	std::string input;
	book.index = 0;
	book.count = 0;
	Starting();
	while (1)
	{
		std::cout << "Please select an action: " << std::endl << std::endl;
		std::cout << "\033[0;32m[ADD]";
		std::cout << "\t[SEARCH]";
		std::cout << "   [EXIT]\033[0m" << std::endl << std::endl << "\033[0;31m> \033[0m";
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
			continue;
		}
		else if (input == "ADD")
		{
			SetCursorPosition(12, 0);
			book.Add();
			SetCursorPosition(12, 0);
		}
		else if (input == "SEARCH")
		{
			SetCursorPosition(12, 0);
			book.Search();
		}
		else if (input == "EXIT")
		{
			SetCursorPosition(12, 0);
			std::cout << std::endl <<"\033[0;31mGoodbye Cruel World...\033[0m" << std::endl << std::endl;
			exit(0);
		}
		else
		{
			SetCursorPosition(12, 0);
			std::cout << "Invalid input. ";
		}
	}
}
