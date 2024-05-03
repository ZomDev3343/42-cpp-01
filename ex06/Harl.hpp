/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tohma <tohma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:04:34 by tohma             #+#    #+#             */
/*   Updated: 2024/05/03 12:29:00 by tohma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string.h>

class Harl
{
	private:
		struct s_funcs
		{
			std::string name;
			void (Harl::*f)(void);
		};
		struct s_funcs _funcs[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl(void);
		void complain(std::string level);
};



#endif