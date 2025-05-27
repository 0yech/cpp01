/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 03:08:59 by nrey              #+#    #+#             */
/*   Updated: 2025/05/27 03:10:40 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage : " << argv[0] << " <LEVEL>" << std::endl;
		return (1);
	}
	Harl harl;
	harl.filter(argv[1]);
	return (0);
}