/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:16:42 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 14:18:52 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.set_weapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	HumanB barbare("Conan");
	Weapon hammer("Hammer");
	barbare.attack();
	barbare.set_weapon(hammer);
	barbare.attack();
	return 0;
}
