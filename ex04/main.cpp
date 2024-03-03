/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:55:38 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/03 15:35:32 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed [filename] [displaced_string] [replacement_string]" << std::endl;
		return (1);
	}

	//defined in block scope so when the `fstream` object goes out of scope,file it is bound to is automatically closed because the fstream object is destroyed
	//if (read_from_file(argv[1]) == 1)
	//	return (1);
	//if (write_to_file(argv[1]) == 1)
	//	return (1);

	std::ifstream	input_file(argv[1]);
	if (!input_file)
	{
		std::cerr << "Failed to open " << argv[1] << "." << std::endl;
		return (1);
	}

	std::string	outfile(argv[1]);
	outfile = outfile.append(".replace");
	std::ofstream	output_file(outfile.c_str());
	if (!output_file)
	{
		std::cerr << "Failed to create " << outfile << "." << std::endl;
		return (1);
	}

	std::string	line;
	std::getline(input_file, line);
	while (input_file.good())
	{
		ft_replace(line, argv[2], output_file, argv[3]);
		std::getline(input_file, line);
	}

	return (0);
}
