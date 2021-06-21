#pragma once
#include <string_view>
#include <vector>
#include <set>

class Parser final
{
public:
	using vector = std::vector< std::string >;
	using set = std::set< std::string >;
	Parser() = default;

	Parser( const Parser& ) = default;
	Parser( Parser&& ) = default;
	Parser& operator=( const Parser& ) = default;
	Parser& operator=( Parser&& ) = default;

	~Parser() = default;

	void make( std::string_view string, std::string_view delimetr = " " ) noexcept;
	size_t getCount()const noexcept;

private:
	size_t wordCount_;
};