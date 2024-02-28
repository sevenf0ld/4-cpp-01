/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:19:47 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 19:30:56 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string arg)
{
	type = arg;
	std::cout << "\x1b[34mWeapon is created\x1b[m." << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "\x1b[34mWeapon is destroyed\x1b[m." << std::endl;
}

const std::string &Weapon::getType(void)
{
	const std::string &type_ref = type;
	return type_ref;
}

void Weapon::setType(std::string arg)
{
	type = arg;
}
