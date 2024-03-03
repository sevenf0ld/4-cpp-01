/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:41:41 by maiman-m          #+#    #+#             */
/*   Updated: 2024/03/03 15:35:15 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

/*
 * error: no matching function for call to ‘std::basic_ifstream<char>::basic_ifstream(std::string&, const std::ios_base::openmode&)’
 * note: candidate: ‘std::basic_ifstream<_CharT, _Traits>::basic_ifstream(const char*, std::ios_base::openmode) [with _CharT = char; _Traits = std::char_traits<char>; std::ios_base::openmode = std::ios_base::openmode]’
 * 	534 |       basic_ifstream(const char* __s, ios_base::openmode __mode = ios_base::in)
 * note:   no known conversion for argument 1 from ‘std::string’ {aka ‘std::__cxx11::basic_string<char>’} to ‘const char*’
 *
 * int	read_from_file(const char *infile)
 */
 int	read_from_file(std::string infile)
{
	//Creates an unbound file stream. fstream is one of the types defined in the fstream header.
	//std::ifstream	input_file;

	//Opens the file named by the s and binds that file to fstrm. s can be a string or a pointer to a C-style character string, opens s in the given mode.
	//input_file.open(argv[1], std::ios::in);

	//For ifstream and ofstream classes, ios::in and ios::out are automatically and respectively assumed, even if a mode that does not include them is passed as second argument to the open member function (the flags are combined).
	//input_file.open(argv[1]);

	//Creates an fstream and opens the file named s. s can have type string or can be a pointer to a C-style character string (§ 3.5.4, p. 122). The default file mode depends on the type of fstream.
	//std::ifstream	input_file(infile, std::ios::in);
	std::ifstream	input_file(infile.c_str(), std::ios::in);

	//if (!input_file.is_open()) // (!input_file) or (!input_file.good()) bc `failbit` is set if `open` fails
	if (!input_file)
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

static int	find_needle(std::string needle, std::string haystack)
{
	std::size_t	found;

	found = haystack.find(needle, 0);
	//returns size_t of npos (last element) in the string if not found
	if (found == std::string::npos)
		return (-1);
	return (found);
}

void	ft_replace(std::string line, std::string needle, std::ofstream &outfile, std::string sub)
{
	int	pos;
	std::string	before;
	std::string	after;
	std::string	repl;

	pos = find_needle(needle, line);
	repl = line;
	while (pos != -1)
	{
		before = line.substr(0, pos);
		after = line.substr(pos + needle.length());
		repl = before + sub + after;
		pos = find_needle(needle, repl);
		line = repl;
	}
	outfile << repl << std::endl;
}
