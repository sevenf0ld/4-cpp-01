/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:09:49 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/04 16:54:12 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define AC_BLACK "\x1b[30m"
#define AC_RED "\x1b[31m"
#define AC_GREEN "\x1b[32m"
#define AC_YELLOW "\x1b[33m"
#define AC_BLUE "\x1b[34m"
#define AC_MAGENTA "\x1b[35m"
#define AC_CYAN "\x1b[36m"
#define AC_WHITE "\x1b[37m"
#define AC_NORMAL "\x1b[m"

#define FORMAT_COMPLAINT(level, str) (std::cout << AC_CYAN << "[ " << level << " ]" << AC_NORMAL << std::endl \
												<< str << std::endl                                           \
												<< std::endl);

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
