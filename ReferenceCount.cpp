#include "ReferenceCount.h"

void ReferenceCount::increment() 
{
	count++;
	displayCount();
}

size_t ReferenceCount::decrement() 
{
	count--;
	displayCount();
	return count;
}

size_t ReferenceCount::getCount() 
{
	return count;
}

void ReferenceCount::displayCount()
{
	cout << "No. of references: " << getCount() << endl;
}