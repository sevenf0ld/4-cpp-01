/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:34:41 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/03 15:37:05 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

void	ft_replace(std::string line, std::string needle, std::ofstream &outfile, std::string sub);

#endif
