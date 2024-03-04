/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:25:11 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/04 11:12:39 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	whiner;

	whiner.complain("DEBUG");
	whiner.complain("INFO");
	whiner.complain("WARNING");
	whiner.complain("ERROR");
	whiner.complain("INVALID");
}
