#include "StringMethods.h"
using std::string;

//created with the purpose of exprimenting with strings and OOP principles
//sort string sorts uppercase letters first according to ascii table scheme

StringMethods::StringMethods()
{
	str = "";
}

StringMethods::StringMethods(string userEnteredString)
{
	str = userEnteredString;
}

string StringMethods::getString() const //const denotes that it wont change any containing data  
{
	return str;
}

void StringMethods::toCharArray(string& strToArray, char (&charArray)[100])
{
	for (int i = 0; i < strToArray.length(); i++)
	{
		charArray[i] = strToArray[i];
	}
}

void StringMethods::charArrayToString(string& strFromArray, char(&charArray)[100])
{
	//need to find a more general solution
}

void StringMethods::reverseString(string& str)
{
	string temp = "";
	for (int i = str.size() - 1; i >= 0; i--)
	{
		char tempElement = str[i];
		temp.append(1, tempElement);
	}
	str.assign(temp);
}

void StringMethods::sortString(string& str)
{
	sort(str.begin(), str.end()); 
}

int StringMethods::countLettersInString(string& str)
{
	int count = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (isalpha(str[i]))
		{
			count++;
		}
	}
	return count;
}
