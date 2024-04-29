/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 23:58:45 by tohma             #+#    #+#             */
/*   Updated: 2024/04/29 14:01:11 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);
		void set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
