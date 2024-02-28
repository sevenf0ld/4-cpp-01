/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:48:28 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/25 15:41:08 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int number;

	number = 10;

	Zombie *horde_of_zombies = zombieHorde(number, "old");
	while (number--)
		horde_of_zombies[number].announce();
	number = 5;
	while (number--)
		horde_of_zombies[number].set_name("new");
	number = 10;
	while (number--)
		horde_of_zombies[number].announce();
	delete[] horde_of_zombies;
}
