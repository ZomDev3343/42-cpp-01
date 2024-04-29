/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 00:09:41 by tohma             #+#    #+#             */
/*   Updated: 2024/04/29 14:14:42 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Str Address : " << &str << std::endl;
	std::cout << "Pointer Str Address : " << stringPTR << std::endl;
	std::cout << "Reference Str Address : " << &stringREF << std::endl;

	std::cout << "Str Value : " << str << std::endl;
	std::cout << "Pointer Str Value : " << *stringPTR << std::endl;
	std::cout << "Reference Str Value : " << stringREF << std::endl;

	return (0);
}
