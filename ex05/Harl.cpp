/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 02:29:05 by nrey              #+#    #+#             */
/*   Updated: 2025/05/27 02:53:42 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "DI TOUT FACON SUI TRO NUL" << std::endl;
}

void Harl::info()
{
	std::cout << "A FOND OUAIS" << std::endl;
}

void Harl::warning()
{
	std::cout << "HEY NAN TIA PA LE DROIT DFAIRE CA MEC" << std::endl;
}

void Harl::error()
{
	std::cout << "MAIS POURQUOI MAIS POURQUOI IL ME FAIT SIDE B" << std::endl;
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*HarlFunction)();
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	HarlFunction actions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*actions[i])();
			return;
		}
	}
}