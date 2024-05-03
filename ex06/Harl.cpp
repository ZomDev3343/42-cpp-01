/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:04:53 by tohma             #+#    #+#             */
/*   Updated: 2024/05/03 12:43:12 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl; 
}

void Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl; 
}

void Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl; 
}

void Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now" << std::endl; 
}

int Harl::getDebugLevel(std::string level)
{
	if (level == "DEBUG")
		return (0);
	else if (level == "INFO")
		return (1);
	else if (level == "WARNING")
		return (2);
	else if (level == "ERROR")
		return (3);
	else
		return (-1);
}