/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:04:20 by truello           #+#    #+#             */
/*   Updated: 2024/04/29 17:20:37 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string p_name, Weapon &p_weapon)
{
	this->name = p_name;
	this->_weapon = p_weapon;
}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{

}
