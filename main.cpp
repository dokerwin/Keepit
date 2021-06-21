#include "Parser.h"

#include <iostream>
#include <string>

/*
Please submit the complete C++ source code for a program 
that counts the number of distinct unique words read from 
the standard input.
For example, given the input "a horse and a dog" the program 
must output "4" (the word 'a' appears twice but only accounts 
for one distinct unique occurrence).
The input text is guaranteed to contain only 'a'..'z' and 
space characters in ASCII encoding.
The program should be able to handle large inputs (e.g. 32 GiB)
You can assume that all unique words fit into memory when 
using the data structure of your choice.
*/

int main()
{	
	std::string in;	
	std::getline( std::cin, in );
	
	Parser parser;
	//parser.make( "Please submit the complete CPPsource code for a program "
	//			 "that counts the number of distinct unique words read from"
	//			 "the standard input" );
	parser.make( in );

	std::cout << parser.getCount() << std::endl;

	return 0;
}