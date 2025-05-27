/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:46:00 by nrey              #+#    #+#             */
/*   Updated: 2025/05/26 19:56:23 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Zombie1;
    Zombie *Zombie2;

    Zombie1 = newZombie("Filippo");
    Zombie2 = newZombie("estettle :3");

    randomChump("Miku");
    randomChump("Teto");

    Zombie1->announce();
    Zombie2->announce();
    
    delete Zombie1;
    delete Zombie2;

    return (0);
}