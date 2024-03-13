/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:11:47 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/04 12:24:54 by maiman-m         ###   ########.fr       */
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

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/*
void	Harl::complain(std::string level)
{
	void (Harl::*pmf)();
	//Harl	whiner;

	switch (hash_level(level))
	{
		case DEBUG:
			pmf = &Harl::debug;
			break ;
		case INFO:
			pmf = &Harl::info;
			break ;
		case WARNING:
			pmf = &Harl::warning;
			break ;
		case ERROR:
			pmf = &Harl::error;
			break ;
		default:
			std::cerr << "\x1b[31mNot a valid complaint\x1b[m." << std::endl;
			return ;
	}
	std::cout << std::string(60, '-') << std::endl;
	(this->*pmf)();
	// (whiner.*pmf)(); // call the member function on an object using a pointer-to-member-function
	std::cout << std::string(60, '-') << std::endl;
}
*/

/*
 * a public member function that calls the private member functions depending on the level passed as parameter
 * use pointers to member functions
 * complain without using a forest of if/else if/else
 */
void Harl::complain(std::string level)
{
	Harl_pmf ptr;

	switch (hash_level(level)) // switch over the result of a hash function that uses the string as input
	{
	case DEBUG:
		ptr = &Harl::debug;
		break;
	case INFO:
		ptr = &Harl::info;
		break;
	case WARNING:
		ptr = &Harl::warning;
		break;
	case ERROR:
		ptr = &Harl::error;
		break;
	default:
		std::cerr << "\x1b[31mNot a valid complaint\x1b[m." << std::endl;
		// break ; // defensive programming to prevent fall-throughs
		return;
	}
	std::cout << std::string(60, '-') << std::endl; // make use of the fill constructor
	(this->*ptr)();									// call with a pointer to the object
	std::cout << std::string(60, '-') << std::endl;
}

// complaints	hash_level(std::string &level)
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
