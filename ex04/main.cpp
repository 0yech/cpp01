/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 01:43:53 by nrey              #+#    #+#             */
/*   Updated: 2025/09/19 10:34:40 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace42(std::ifstream &inFile, std::ofstream &outFile, 
					const std::string &s1, const std::string &s2)
{
	std::string line;
	while (std::getline(inFile, line))
	{
		size_t pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outFile << line << std::endl;
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