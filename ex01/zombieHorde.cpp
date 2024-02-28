/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:48:54 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/25 15:43:36 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
 * allocate N Zombie objects in a single allocation
 * initialize the zombies, giving each one of them the name passed as paramete
 */
Zombie *zombieHorde(int N, std::string name)
{
	Zombie *dynamic_zombies = new Zombie[N];

	while (N--)
		dynamic_zombies[N].set_name(name);
	return (dynamic_zombies);
}
