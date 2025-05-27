/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 01:43:53 by nrey              #+#    #+#             */
/*   Updated: 2025/05/27 02:08:00 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

bool	isMatch(const std::string &line, size_t pos, const std::string &s1)
{
	for (size_t i = 0; i < s1.length(); ++i)
	{
		if (pos + i >= line.length() || line[pos + i] != s1[i])
			return (false);
	}
	return (true);
}

void	replace42(std::ifstream &inFile, std::ofstream &outFile, 
					const std::string &s1, const std::string &s2)
{
	std::string line;
	while (std::getline(inFile, line))
	{
		std::string newLine;
		size_t i = 0;
		while (i < line.length())
		{
			if (isMatch(line, i, s1))
			{
				newLine += s2;
				i += s1.length();
			}
			else
			{
				newLine += line[i];
				i++;
			}
		}
		outFile << newLine << std::endl;
	}
}


int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <inputfile> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error: s1 should not be empty." << std::endl;
		return (1);
	}
	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cerr << "Error: can't open file." << std::endl;
		return (1);
	}
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile)
	{
		std::cerr << "Error: can't create output file." << std::endl;
		return (1);
	}
	replace42(inFile, outFile, s1, s2);
	inFile.close();
	outFile.close();
	return (0);
}