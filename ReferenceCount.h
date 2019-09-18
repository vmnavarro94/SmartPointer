#pragma once
#include<iostream>
using namespace std;
class ReferenceCount
{
public:
	
	void increment();
	size_t decrement();
	size_t getCount();
	void displayCount();

private:
	size_t count;
};

