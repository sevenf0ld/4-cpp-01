/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:27:55 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/25 15:02:26 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
	std::string	name;

	public:
		Zombie(std::string arg);
		Zombie();
		~Zombie();

		void	announce(void);
		void	set_name(std::string arg);
};

Zombie*	zombieHorde(int N, std::string name);
