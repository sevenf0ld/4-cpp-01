/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:27:55 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/24 20:50:22 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
	std::string	name;

	public:
		Zombie(std::string arg);
		~Zombie();

		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
