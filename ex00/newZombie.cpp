/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:38:23 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/25 14:41:32 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// creates, names and returns it to use it outside of function scope
Zombie*	newZombie(std::string name)
{
	Zombie*	dynamic_zombie = new Zombie(name);

	return (dynamic_zombie);
}
