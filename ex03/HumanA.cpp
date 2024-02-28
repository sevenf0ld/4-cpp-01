/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:29:58 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 21:28:27 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// make use of initializer list as references must be initialized
HumanA::HumanA(std::string arg_name, Weapon &weapon) : weapon_ref(weapon)
{
	name = arg_name;
	std::cout << "\x1b[34mHumanA is created\x1b[m." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "\x1b[34mHumanA is destroyed\x1b[m." << std::endl;
}

void HumanA::attack(void)
{
	std::cout << "Attack by " << name << " with " << weapon_ref.getType() << "!" << std::endl;
}
