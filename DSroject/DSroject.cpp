// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList<char> ll;
	ll.insert_first(1);
	ll.insert_first(2);
	ll.insert_first(2);
	ll.insert_first(2);

	std::cout << ll.count();
}
