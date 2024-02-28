/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:18:28 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 21:05:11 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string arg_name)
{
	name = arg_name;
	weapon_ptr = NULL;
	std::cout << "\x1b[34mHumanB is created\x1b[m." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "\x1b[34mHumanB is destroyed\x1b[m." << std::endl;
}

void HumanB::attack(void)
{
	std::cout << "Attack by " << name << " with " << weapon_ptr->getType() << "!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	weapon_ptr = &weapon;
}
