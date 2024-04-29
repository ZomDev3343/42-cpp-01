/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:55:04 by truello           #+#    #+#             */
/*   Updated: 2024/04/29 17:20:10 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(void);
		Weapon(std::string name);

		std::string	getType() const;
		void		setType(std::string p_type);
};

#endif
