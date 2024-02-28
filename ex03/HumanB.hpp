/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:16:21 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 21:25:17 by maiman-m         ###   ########.fr       */
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
 *
 * a pointer need not be initialized at the time it is defined
 */
class HumanB
{
	Weapon *weapon_ptr;
	std::string name;

public:
	HumanB(std::string arg_name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &weapon);
};
