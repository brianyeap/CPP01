/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 21:30:30 by brian             #+#    #+#             */
/*   Updated: 2025/06/19 02:30:06 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

typedef std::string t_string;

static int open_files(t_string inputName, t_string outputName, std::ifstream *inputFile, std::ofstream *outputFile)
{
	inputFile->open(inputName.c_str(), std::ios::in);
	if (!inputFile->is_open())
	{
		std::cerr << "Failed to open input file!" << std::endl;
		return 1;
	}

	outputFile->open(outputName.c_str(), std::ios::out);
	if (!outputFile->is_open())
	{
		std::cerr << "Failed to open output file!" << std::endl;
		inputFile->close();
		return 1;
	}

	return 0;
}

static void read_and_replace(char **argv, std::ifstream *inputFile, std::ofstream *outputFile)
{
	t_string				to_find;
	t_string				to_replace;
	t_string				line;
	std::string::size_type	found;
	size_t					end_last_found;
	t_string				replaced_line;

	to_find = *(argv + 2);
	to_replace = *(argv + 3);
	end_last_found = 0;

	while(std::getline(*inputFile, line))
	{
		replaced_line.clear();
		end_last_found = 0;
		found = line.find(to_find);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				replaced_line.append(line,end_last_found,found - end_last_found);
				replaced_line += to_replace;
				end_last_found = found + to_find.length();
				found = line.find(to_find, end_last_found);
				if (found == std::string::npos)
					replaced_line.append(line, end_last_found,line.length());
			}
		} else
			replaced_line = line;
		if (!(*inputFile).eof())
			*outputFile << replaced_line << std::endl;
		else
			*outputFile << replaced_line;
	}
}

int main(int argc, char **argv)
{
	t_string inputFileName;
	t_string outputFileName;
	std::ifstream inputFile;
	std::ofstream outputFile;

	if (argc != 4)
		return (std::cout << "Invalid number of arguments" << std::endl, 0);
	inputFileName = argv[1];
	outputFileName = inputFileName + ".replace";
	if (open_files(inputFileName, outputFileName, &inputFile, &outputFile))
		return (1);
	read_and_replace(argv, &inputFile, &outputFile);
	inputFile.close();
	outputFile.close();
	return (0);
}