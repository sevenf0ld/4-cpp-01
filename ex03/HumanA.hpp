/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:56:48 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 19:37:35 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

/*
 * have a Weapon
 * have a name
 * attack() member function that displays: <name> attacks with their <weapon type>
 *
 * HumanA takes Weapon in the constructor
 * HumanA is always armed
 */
class HumanA
{
	Weapon &weapon_ref;
	std::string name;

public:
	HumanA(std::string arg_name, Weapon &weapon);
	~HumanA();

	void attack(void);
};
