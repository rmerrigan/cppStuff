#pragma once
#include <string>
#include <algorithm>
#include <cctype>
class StringMethods
{
public:
	StringMethods();
	StringMethods(std::string);
	std::string getString() const;
	static void toCharArray(std::string&, char (&charArray)[100]);
	static void charArrayToString(std::string&, char(&charArray)[100]);
	static void reverseString(std::string&);
	static void sortString(std::string&);
	static int countLettersInString(std::string&);

private:
	std::string str;
};

