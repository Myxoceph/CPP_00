/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:15:04 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/21 13:41:45 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contacts.hpp"

void starting()
{
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

int main()
{
	std::cout << "\033[2J\033[1;1H";
	starting();
}