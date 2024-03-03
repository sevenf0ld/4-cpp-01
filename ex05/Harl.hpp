/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:09:49 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/03 16:39:36 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

// # define DEBUG 1
// # define INFO 2
// # define WARNING 3
// # define ERROR 4

#include <string>
#include <iostream>

enum complaints
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl();
	~Harl();

	void	complain(std::string level);
};

#endif
