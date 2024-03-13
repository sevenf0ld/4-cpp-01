/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:09:49 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/04 12:26:12 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Harl();
	~Harl();

	void complain(std::string level);
};

/*
 * looks like the verbose form of ordinary function pointers (with the address-of operator)
 * qualify the pointer name with the class name
 * return_type (class_name::*pointer_name) (parameter types)
 *
 * set a member function pointer to point to a member function
 * Harl_pmf is a pointer-to-member-function of class Harl
 */
typedef void (Harl::*Harl_pmf)(void);

enum complaints
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	INVALID = -1
};

complaints hash_level(std::string level);

#endif
