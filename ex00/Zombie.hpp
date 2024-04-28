/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 23:58:45 by tohma             #+#    #+#             */
/*   Updated: 2024/04/29 00:07:45 by tohma            ###   ########.fr       */
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
		
		Zombie(void);

	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif