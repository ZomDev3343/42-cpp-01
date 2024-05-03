/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:04:34 by tohma             #+#    #+#             */
/*   Updated: 2024/05/03 12:43:06 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string.h>

class Harl
{
	public:
		Harl(void);
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		int getDebugLevel(std::string level);
};

#endif