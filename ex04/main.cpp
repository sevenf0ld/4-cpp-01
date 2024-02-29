/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:55:38 by maiman-m          #+#    #+#             */
/*   Updated: 2024/02/29 13:14:52 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

/*
 * error: no matching function for call to ‘std::basic_ifstream<char>::basic_ifstream(std::string&, const std::ios_base::openmode&)’
 * note: candidate: ‘std::basic_ifstream<_CharT, _Traits>::basic_ifstream(const char*, std::ios_base::openmode) [with _CharT = char; _Traits = std::char_traits<char>; std::ios_base::openmode = std::ios_base::openmode]’
 * 	534 |       basic_ifstream(const char* __s, ios_base::openmode __mode = ios_base::in)
 * note:   no known conversion for argument 1 from ‘std::string’ {aka ‘std::__cxx11::basic_string<char>’} to ‘const char*’
 *
 * int	read_from_file(std::string filename)
 */
//int	read_from_file(const char *infile)
 int	read_from_file(std::string infile)
{
	//Creates an unbound file stream. fstream is one of the types defined in the fstream header.
	//std::ifstream	input_file;

	//Opens the file named by the s and binds that file to fstrm. s can be a string or a pointer to a C-style character string, opens s in the given mode.
	//input_file.open(argv[1], std::ios::in);

	//Each of the open member functions of classes ofstream, ifstream and fstream has a default mode that is used if the file is opened without a second argument.
	//For ifstream and ofstream classes, ios::in and ios::out are automatically and respectively assumed, even if a mode that does not include them is passed as second argument to the open member function (the flags are combined).
	//input_file.open(argv[1]);

	//Creates an fstream and opens the file named s. s can have type string or can be a pointer to a C-style character string (§ 3.5.4, p. 122). These constructors are explicit (§ 7.5.4, p. 296). The default file mode depends on the type of fstream.
	//std::ifstream	input_file(infile, std::ios::in);
	std::ifstream	input_file(infile.c_str(), std::ios::in);

	//To check if a file stream was successful opening a file, you can do it by calling to member is_open. This member function returns a bool value of true in the case that indeed the stream object is associated with an open file
	if (!input_file.is_open()) // alt if (!input_file)
	{
		std::cerr << "Failed to open " << infile << "." << std::endl;
		return (1);
	}
	return (0);
}

int	write_to_file(std::string infile)
{
	std::string	outfile;

	outfile = infile.append(".replace");
	std::ofstream	output_file(outfile.c_str(), std::ios::out);
	if (!output_file.is_open())
	{
		std::cerr << "Failed to create " << outfile << "." << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed [filename] [displaced_string] [replacement_string]" << std::endl;
		return (1);
	}
	if (read_from_file(argv[1]) == 1)
		return (1);
	if (write_to_file(argv[1]) == 1)
		return (1);

}
