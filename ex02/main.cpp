/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:59:25 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/26 21:46:03 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

/*
 * a pointer is an object in its own right
 * unlike a reference, a pointer need not be intialized at the time it is defined
 * pointers defined at block scope are undefined if uninitialized, similar to other built-ins
 * a pointer holds the address of an object
 *
 * bind the reference to the initializer instead of instead of copying the value of the initializer into the object created (variable initialized)
 * a reference remains bound to its initial object
 * there is no way to rebind
 * a reference is an alias, not an object
 * reference and object it is bound to must be of the same type
 */
int main(void)
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	// stringREF = str;
	std::cout << "The address of str is: " << &str << std::endl;
	std::cout << "The address of stringPTR is: " << stringPTR << std::endl;
	std::cout << "The address of stringREF is: " << &stringREF << std::endl;

	std::cout << "The value of str is: " << str << std::endl;
	std::cout << "The value of stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value of stringREF is: " << stringREF << std::endl;
}
