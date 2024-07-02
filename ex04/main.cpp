/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <truello@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 23:41:23 by tohma             #+#    #+#             */
/*   Updated: 2024/07/02 13:28:12 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

static std::string replace_string(std::string &str, const std::string to_replace, const std::string replacement)
{
	std::string res;
	int			pos = -1, search_pos = 0;

	while (str[++pos])
	{
		if (pos == str.find(to_replace, search_pos))
		{
			res.append(replacement);
			search_pos = pos + to_replace.length();
			pos += to_replace.length() - 1;
		}
		else
			res.append(1, str[pos]);
	}
	res.append(1, '\n');
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		file_res;
		std::string		line;
		std::string		output_file_name;
		std::ifstream	input_file;
		std::ofstream	output_file;

		input_file.open(av[1]);
		if (av[2][0] == '\0' || av[3][0] == '\0')
		{
			std::cout << "Invalid replacement or string to replace" << std::endl;
			return (1);
		}
		if (input_file.is_open())
		{
			while (std::getline(input_file, line))
				file_res += replace_string(line, av[2], av[3]);
			input_file.close();
			output_file.open(std::string(av[1]) + ".replace");
			if (output_file.is_open())
			{
				output_file << file_res;
				output_file.close();
			}
			else
				std::cerr << "Error while opening the output file !" << std::endl;
		}
		else
			std::cerr << "Error while opening the input file !" << std::endl;

	}
	else
		std::cout << "Usage: <filename> <str_to_replace> <replacement>" << std::endl;
	return (0);
}
