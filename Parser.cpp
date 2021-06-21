#include "Parser.h"

#include <string_view>
#include <iostream>
#include <sstream>



void Parser::make( std::string_view string, std::string_view delimetr/* = " "*/ ) noexcept
{
	set container;
	std::istringstream ss( string.data() );
	

	while( ss )
	{
		std::string tmp;
		ss >> tmp;
		if( ss )
			container.insert( tmp );
	}
	
	wordCount_ = container.size();
}

size_t Parser::getCount() const noexcept
{
	return wordCount_;
}