/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:25:11 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/04 17:00:25 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
 * takes one of the four levels as program parameter
 * display all msgs from said level and above
 */
int	main(int argc, char **argv)
{
	Harl	whiner;

	if (argc != 2)
	{
		std::cerr << AC_RED << "Usage: ./harlFilter [OPTIONS]" << std::endl << "OPTIONS: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	whiner.complain(argv[1]);
}
