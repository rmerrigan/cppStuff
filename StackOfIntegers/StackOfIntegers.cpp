#include "StackOfIntegers.h"

//very useful data structure, potentially useful for strings and other types, good for small
//amounts of data or predictably sized data for custom methods with comparing or storage etc. 

StackOfIntegers::StackOfIntegers()
{
	size = 0;
}

bool StackOfIntegers::isEmpty() const //tests is size is 0
{
	return size == 0; 
}

int StackOfIntegers::peek() const //sees whats on top of stack
{
	return elements[size - 1];
}

void StackOfIntegers::push(int value) { 
	elements[size++] = value;
}

int StackOfIntegers::pop()
{
	return elements[--size];
}

int StackOfIntegers::getSize() const
{
	return size;
}