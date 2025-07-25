/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:31:06 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/25 15:29:21 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
 * Zombie class with a private string attr `name`
 * parameterized constructor so as to not use a setter to set the name
 */
Zombie::Zombie(std::string arg)
{
	name = arg;
	std::cout << name << " "
			  << "is \x1b[34mcreated\x1b[m." << std::endl;
}

// destructor to print a msg along with `name` for debugging
Zombie::~Zombie(void)
{
	std::cout << name << " "
			  << "is \x1b[34mdestroyed\x1b[m." << std::endl;
}

// member function of the Zombie class
void Zombie::announce(void)
{
	std::cout << name << ": "
			  << "BraiiiiiiinnnzzzZ..." << std::endl;
}
