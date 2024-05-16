/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:25:48 by truello           #+#    #+#             */
/*   Updated: 2024/05/16 14:17:40 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string p_name)
{
	this->_name = p_name;
	this->_weapon = nullptr;
}

HumanB::~HumanB(void)
{

}

void HumanB::set_weapon(Weapon &weapon)
{
	std::cout << this->_name << " grabs a " << weapon.getType() << std::endl;
	this->_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << (this->_weapon == nullptr ? "hands" : this->_weapon->getType()) << std::endl;
}
