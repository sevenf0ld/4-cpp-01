/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:47:20 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/28 19:30:41 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

/*
 * private attribute type, which is a string
 * getType() member function that returns a const reference to type
 * setType() member function that sets type using the new one passed as param-
eter
 */
class Weapon
{
	std::string type;

public:
	Weapon(std::string arg);
	~Weapon();

	const std::string &getType();
	void setType(std::string arg);
};
