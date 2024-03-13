/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:11:47 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/04 17:01:02 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << AC_BLUE << "Harl is created." << AC_NORMAL << std::endl;
}

Harl::~Harl(void)
{
	std::cout << AC_BLUE << "Harl is destroyed." << AC_NORMAL << std::endl;
}

void Harl::debug(void)
{
	FORMAT_COMPLAINT("DEBUG", "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!");
}

void Harl::info(void)
{
	FORMAT_COMPLAINT("INFO", "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!");
}

void Harl::warning(void)
{
	FORMAT_COMPLAINT("WARNING", "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.");
}

void Harl::error(void)
{
	FORMAT_COMPLAINT("ERROR", "This is unacceptable! I want to speak to the manager now.");
}

void Harl::complain(std::string level)
{
	Harl_pmf ptr;

	switch (hash_level(level))
	{
	case DEBUG:
		ptr = &Harl::debug;
		(this->*ptr)();
	case INFO:
		ptr = &Harl::info;
		(this->*ptr)();
	case WARNING:
		ptr = &Harl::warning;
		(this->*ptr)();
	case ERROR:
		ptr = &Harl::error;
		(this->*ptr)();
		break;
	default:
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

complaints hash_level(std::string level)
{
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	if (level == "WARNING")
		return WARNING;
	if (level == "ERROR")
		return ERROR;
	return (INVALID);
}
