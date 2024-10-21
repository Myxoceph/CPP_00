/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:21:47 by abakirca          #+#    #+#             */
/*   Updated: 2024/10/21 14:29:18 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	av++;
	for (int i = 0; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
		{
			if (islower(av[i][j]))
				std::cout << (char)toupper(av[i][j]);
			else
				std::cout << (char)av[i][j];
		}
	}
	std::cout << std::endl;
	return (0);
}