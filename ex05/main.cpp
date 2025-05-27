/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrey <nrey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 02:46:34 by nrey              #+#    #+#             */
/*   Updated: 2025/05/27 02:54:34 by nrey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl filippo;

	filippo.complain("WARNING");
	filippo.complain("INFO");
	filippo.complain("ERROR");
	filippo.complain("DEBUG");
	filippo.complain("DEBUG");
	return (0);
}