/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:17:54 by nrey              #+#    #+#             */
/*   Updated: 2025/06/12 21:47:52 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();

        void setName(std::string name);
        void announce() const;
};

Zombie* zombieHorde(int N, std::string name);

#endif