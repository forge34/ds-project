// DSroject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Branch.h"
#include "BranchManager.h"
#include "Doctor.h"
#include "DoctorManager.h"
#include "PatientManager.h"

int main()
{
	PatientManager PM;

	Patient d1, d2;
	d1.set_id("1");
	d1.set_name("Sherif");

	d2.set_id("2");
	d2.set_name("Omar");

	PM.insert_first(d1);
	PM.insert_first(d2);

	cout << PM.count() << endl;
	Patient* p = PM.search_by_name("Sherif");

	cout << p->get_id() << endl;

	PM.remove_patient("2");

	cout << PM.count() << endl;
	cout << (PM.search_by_name("Omar") == NULL) << endl;
}
