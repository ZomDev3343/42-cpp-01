/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:59:55 by truello           #+#    #+#             */
/*   Updated: 2024/04/30 22:03:31 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&_weapon;
		std::string _name;

	public:
		HumanA(std::string p_name, Weapon &p_weapon);
		~HumanA();
		void	attack(void);
};

#endif
