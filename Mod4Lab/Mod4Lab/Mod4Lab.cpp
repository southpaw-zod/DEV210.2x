// Mod4Lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


int main()
{
	// Get total from file
	int total;
	std::fstream donFile("donation_total.txt");
	std::string lineIn, lastLine;
	while (std::getline(donFile, lineIn))
	{
		lastLine = lineIn;
	}
	donFile.clear();
	total = stoi(lastLine);

	// Get donation
	std::cout << "Enter donation (eg. Tom 25): ";
	std::string name, line;
	int amt;
	std::getline(std::cin, line);
	std::stringstream stream(line);
	stream >> name >> amt;

	// Update total and file
	total += amt;
	donFile << total << std::endl;
	
	donFile.close();
    return 0;
}

