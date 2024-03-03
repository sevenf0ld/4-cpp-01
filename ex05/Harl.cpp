/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:11:47 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/03 16:47:22 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "\x1b[34mHarl is created\x1b[m." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "\x1b[34mHarl is destroyed\x1b[m." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	switch (1)
	{
		case DEBUG:
			debug();
			break ;
		case INFO:
			info();
			break ;
		case WARNING:
			warning();
			break ;
		case ERROR:
			error();
			break ;
		default:
			std::cerr << "\x1b[31mNot a valid complaint\x1b[m." << std::endl;
			break ; // defensive programming
	}
}
