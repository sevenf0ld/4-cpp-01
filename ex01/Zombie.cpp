/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:31:06 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/25 15:44:21 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
 * Zombie class with a private string attr `name`
 * parameterized constructor so as to not use a setter to set the name (ex00)
 */
Zombie::Zombie(std::string arg)
{
	name = arg;
	std::cout << name << " " << "is \x1b[34mcreated (parameterized)\x1b[m." << std::endl;
}

/*
 * allocating a horde with the `new[]` operator calls the parameterized constructor
 * which throws an error, error: no matching function for call to ‘Zombie::Zombie()’
 * constructor passed to `new` does not take in arguments
 * create a default (no parameter) constructor
 */
Zombie::Zombie(void)
{
	name = "unset";
	std::cout << "A zombie named " << name << " is \x1b[34mcreated (default)\x1b[m." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << " " << "is \x1b[34mdestroyed\x1b[m." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ":" << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// (default) constructor called only once when instantiating, Zombie needs a setter
void	Zombie::set_name(std::string arg)
{
	name = arg;
}
