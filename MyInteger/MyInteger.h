#pragma once
#include <string>
class MyInteger
{
public:
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

private:
	int value;
};

