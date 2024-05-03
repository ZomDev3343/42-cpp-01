/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:32:55 by tohma             #+#    #+#             */
/*   Updated: 2024/05/03 12:44:38 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl harl;

		switch (harl.getDebugLevel(av[1]))
		{
			case 0:
				harl.debug();
			case 1:
				harl.info();
			case 2:
				harl.warning();
			case 3:
				harl.error();
			default:
				break;
		}
	}
	else
		std::cout << "Usage : ./harlFilter <debug_level>" << std::endl;
	return (0);
}