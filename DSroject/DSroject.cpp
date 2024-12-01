// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "BranchManager.h"
#include "Doctor.h"
#include "DoctorManager.h"

int main()
{
	DoctorManager DM;

	Doctor d1, d2;
	d1.set_id("1");
	d1.set_name("Sherif");
	d1.set_spec("Neuroglosit");

	d2.set_id("2");
	d2.set_name("Omar");
	d2.set_spec("Surgeon");

	DM.insert_first(d1);
	DM.insert_first(d2);

	DM.display();
}
