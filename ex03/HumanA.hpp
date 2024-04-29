/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:59:55 by truello           #+#    #+#             */
/*   Updated: 2024/04/29 17:20:54 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon&		_weapon;
		std::string name;

	public:
		HumanA(std::string p_name, Weapon &p_weapon);
		~HumanA();
		void	attack(void);
};

#endif
