#include<iostream>
#include"Character.h"
#include"SmartPointer.h"

using namespace std;
SmartPointer<Character> createPointers();
int main() 
{
	
	SmartPointer<Character> ptr = createPointers();

	cin.get();

	return 0;
}

SmartPointer<Character> createPointers() 
{
	SmartPointer<Character> pointer(new Character("Buker", 150));

	SmartPointer<Character> pointer2(pointer);

	SmartPointer<Character> pointer3 = pointer2;

	return pointer3;
}
