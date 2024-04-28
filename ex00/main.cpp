/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:09:41 by tohma             #+#    #+#             */
/*   Updated: 2024/04/29 00:13:10 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{

	Zombie *bryan = newZombie("BryanElPollo");
	bryan->announce();

	Zombie antaunio("antaunio");
	antaunio.announce();
	delete bryan;

	randomChump("FernandoRoberto");
	
	return (0);
}