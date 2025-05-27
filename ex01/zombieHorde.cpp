/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:23:18 by nrey              #+#    #+#             */
/*   Updated: 2025/05/22 20:50:58 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N<=0)
        return (NULL);

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i)
        horde[i].setName(name);
    return (horde);
}