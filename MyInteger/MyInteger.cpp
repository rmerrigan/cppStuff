#include "MyInteger.h"

/*
MyInteger();
MyInteger(int);
int getMyInteger() const;
bool isEven() const;
bool isOdd() const;
bool isPrime() const;
static bool isEven(int);
static bool isOdd(int);
static bool isPrime(int);
static bool isEven(const MyInteger&);
static bool isOdd(const MyInteger&);
static bool isPrime(const MyInteger&);
bool equals(int) const;
bool equals(const MyInteger&);
static void parseInt(const std::string&);
*/
//parse int assumes string is an int, does not include type checking (implement later)

MyInteger::MyInteger()
{
	value = 0;
}

MyInteger::MyInteger(int userEnteredValue)
{
	value = userEnteredValue;
}

int MyInteger::getMyInteger() const
{
	return value;
}

bool MyInteger::isEven() const
{
	return value % 2 == 0;
}

bool MyInteger::isOdd() const
{
	return value % 2 == 1;
}

bool MyInteger::isPrime() const
{
	if ((value == 1) || (value == 2))
	{
		return true;
	}

	for (int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			return false;
	}

	return true;
}

bool MyInteger::isEven(int userEnteredValue)
{
	return userEnteredValue % 2 == 0;
}

bool MyInteger::isOdd(int userEnteredValue)
{
	return userEnteredValue % 2 == 1;
}

bool MyInteger::isPrime(int value)
{
	if ((value == 1) || (value == 2))
	{
		return true;
	}

	for (int i = 2; i <= value / 2; i++)
	{
		if (value % i == 0)
			return false;
	}

	return true;
}

bool MyInteger::isEven(const MyInteger& myInteger)
{
	return myInteger.getMyInteger() % 2 == 0;
}

bool MyInteger::isOdd(const MyInteger& myInteger)
{
	return myInteger.getMyInteger() % 2 == 1;
}

bool MyInteger::isPrime(const MyInteger& myInteger)
{
	if ((myInteger.getMyInteger() == 1) || (myInteger.getMyInteger() == 2))
	{
		return true;
	}

	for (int i = 2; i <= myInteger.getMyInteger() / 2; i++)
	{
		if (myInteger.getMyInteger() % i == 0)
			return false;
	}

	return true;
}

bool MyInteger::equals(int userEnteredValue) const
{
	return value == userEnteredValue;
}

bool MyInteger::equals(const MyInteger& myInteger)
{
	return value == myInteger.getMyInteger();
}
