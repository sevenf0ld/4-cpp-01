/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:21 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 19:40:26 by maiman-m         ###   ########.fr       */
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
 * HumanB does not take Weapon in the constructor
 * HumanB is not always armed
 */
class HumanB
{
	std::string name;
	Weapon *weapon_ptr;

public:
	HumanB(std::string arg);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &weapon);
};
