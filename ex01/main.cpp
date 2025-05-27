/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:16:01 by nrey              #+#    #+#             */
/*   Updated: 2025/05/22 20:53:12 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 1;
    Zombie *horde;

    horde = zombieHorde(n, "filipo");
    if (horde)
    {
        for (int i = 0; i < n; ++i)
            horde[i].announce();
        delete[] horde;
    }
    return (0);
}