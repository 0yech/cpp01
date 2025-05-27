/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:17:54 by nrey              #+#    #+#             */
/*   Updated: 2025/05/22 20:50:47 by nrey             ###   ########.fr       */
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
        Zombie();   // default constructor
        ~Zombie();  // default destructor

        void setName(std::string name);
        void announce() const; // const as it doesn't edit any values
};

Zombie* zombieHorde(int N, std::string name);

#endif