/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 02:29:05 by nrey              #+#    #+#             */
/*   Updated: 2025/05/27 03:12:11 by nrey             ###   ########.fr       */
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

void Harl::filter(std::string level)
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int idx = -1;
    for (int i = 0;i < 4;++i)
    {
        if (level == levels[i])
        {
            idx = i;
            break;
        }
    }
    switch(idx)
    {
        case 0:
            complain("DEBUG");
            /* fall through */
        case 1:
            complain("INFO");
            /* fall through */
        case 2:
            complain("WARNING");
            /* fall through */
        case 3:
            complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}