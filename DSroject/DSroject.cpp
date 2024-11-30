// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "BranchManager.h"

int main()
{
	BranchManager BM;

	Branch b;
	b.set_id("123");
	b.set_name("MO-01");
	b.set_Location("Egypt");

	Branch b2;
	b2.set_id("123E@");
	b2.set_name("AD-07");
	b2.set_Location("Cairo");
		
	BM.insert_first(b);
	BM.insert_first(b2);

	std::cout << "number of branches is : " << BM.count() << endl;
	BM.display();

	Branch found = BM.search_by_id("123");
	cout << "Result found , name is : " << found.get_name();
}
