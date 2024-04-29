/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:25:48 by truello           #+#    #+#             */
/*   Updated: 2024/04/29 17:29:29 by truello          ###   ########.fr       */
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

void HumanB::attack(void)
{

}
