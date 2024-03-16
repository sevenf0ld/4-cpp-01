/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:25:34 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/16 15:07:47 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *dynamic_zombie;

	dynamic_zombie = newZombie("dynamicStorage");
	dynamic_zombie->announce();
	randomChump("automaticStorage");
	delete dynamic_zombie;
}
