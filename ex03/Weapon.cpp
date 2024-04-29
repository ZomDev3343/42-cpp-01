/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:56:50 by truello           #+#    #+#             */
/*   Updated: 2024/04/29 17:20:31 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string w_type)
{
	this->_type = w_type;
}

std::string Weapon::getType() const
{
	return (this->_type);
}


void		Weapon::setType(std::string p_type)
{
	this->_type = p_type;
}
