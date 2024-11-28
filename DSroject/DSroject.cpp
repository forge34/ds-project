// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"

int main()
{
	LinkedList<Branch> ll;

	Branch b;
	b.set_id("123");
	b.set_name("132312");
	b.set_Location("dak");

	ll.insert_first(b);

	std::cout << ll.count() << endl;
	std::cout << b.get_Location() << endl;
	std::cout << b.get_name() << endl;
	std::cout << b.get_id() << endl;
}
